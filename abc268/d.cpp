#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>


using namespace std;

int main(){
    long N, M;
    cin >> N >> M;

    vector<long> order(N, 0);
    for(int i=0; i<N;i++){
        order[i] = i;
    }

    vector<string> origin(N, "");

    int min_size = 0;
    for (auto &&s : origin)
    {
        min_size += s.size();
    }
    int add_underbar = 16 - min_size;

    for (auto &&s : origin)
    {
        cin >> s;
    }

    set<string> st_string;

    for(int i=0;i<M;i++){
        string s;
        cin >> s;
        s.erase(remove(s.begin(), s.end(), '_'), s.end());
        if(st_string.find(s) == st_string.end()){
            st_string.insert(s);
        }
    }

    if(min_size >= 17){
        cout << -1 << endl;
        return 0;
    }


    string ans = "";
    do
    {
        string generated = "";
        for(auto &num: order){
            generated += origin[num];
        }

        if(st_string.find(generated) != st_string.end()) continue;

    } while (next_permutation(order.begin(), order.end()));



}