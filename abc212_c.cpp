#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < (n); ++i)

using namespace std;


int main(){
    int N,M;
    cin >> N>>M;

    vector<int> A(N);
    vector<int> B(M);

    rep(i,N) cin >> A[i];
    rep(i,M) cin >> B[i];

    int ans = 1001001001;

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    int a=0;
    int b=0;

    while((a < N) && (b < M)){
        ans = min( ans, abs( A[a] - B[b] ) );
        if( A[a] < B[b] ) a++; else b++;
    }

    cout << ans << endl;

    return 0;
}