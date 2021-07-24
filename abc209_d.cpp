#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using Graph = vector<vector<int>>;

// 最短となる無向グラフの路を見つけ、その値が偶数か奇数かで判断する。
// 無向グラフであるので、重みなし。但し、N,Qどちらも10^5オーダーより、クエリ全通りに対して探索を行うのは遅い。
// 今まで通った道を記録して再利用する。

int main(){
    long N,Q;cin >> N >> Q;

    Graph G(N);
    
    for (int i = 0; i < N - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    
    
    return 0;
}