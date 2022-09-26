#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using Graph = vector<vector<long>>;

bool flag = false;

void dfs(long v, Graph &g, vector<bool> &seen, long search_Y, vector<long> &ans){
    seen[v] = true;
    if(v == search_Y){
        flag = true;
    }else{
        for(auto &next_v: g[v]){
        if(seen[next_v]) continue;
        if(flag) continue;
        dfs(next_v, g, seen, search_Y, ans);
        }
    }

    if(flag){
        ans.push_back(v);
    }

}


int main(){
    long N, X, Y;
    cin >> N >> X >> Y;

    Graph g(N+1);

    for(int i=1;i < N;i++){
        long u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    
    vector<bool> seen(N+1, false);
    vector<long> ans_reverse;
    
    seen[X] = true;
    
    dfs(X, g, seen, Y, ans_reverse);

    reverse(ans_reverse.begin(), ans_reverse.end());

    for(auto &a: ans_reverse){
        cout << a << " ";
    }


}