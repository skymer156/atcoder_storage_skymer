// 復習
#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep_a(v,item) for(auto v: item)

using namespace std;

int main(){
    int H,W,N;
    cin >> H >> W >> N;

    vector<long> A(N,0);
    vector<long> B(N,0);

    rep(i,N) cin >> A[i] >> B[i];

    set<long> a;
    set<long> b;

    rep(i,N) a.insert(A[i]);
    rep(i,N) b.insert(B[i]);

    map<long, long> amap;
    map<long, long> bmap;    

    int index = 0;
    rep_a(v,a){
        amap[v] = index+1;
        index++;
    }

    index = 0;
    rep_a(v,b){
        bmap[v] = index+1;
        index++;
    }

    vector<long> A_ans(N,0);
    vector<long> B_ans(N,0);

    rep(i,N){
        A_ans[i] = amap[A[i]];
        B_ans[i] = bmap[B[i]];
    }

    rep(i,N) cout << A_ans[i] << ' ' << B_ans[i] << endl;

    return 0;
}