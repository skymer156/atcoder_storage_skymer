// 最大化する

#include <iostream>
#include <vector>
#include <cstdlib>

#define rep(i,n) for (int i = 0; i < (n); ++i)

using namespace std;

const long long INF = 1LL << 60;

long max(long a,long b){
    if(a >= b){
        return a;
    }else{
        return b;
        }
}

int main(){
    long N;
    cin >> N;

    vector<vector<long>> dp(N+100,vector<long>(3));

    long a[N][3];

    rep(i,N) rep(j,3) cin >> a[i][j];

    rep(i,N) rep(j, 3) rep(k, 3) {
        if( j == k ) continue;
        dp[i+1][k] = max(dp[i+1][k], dp[i][j] + a[i][k] );
    }

    long ans = 0;
    rep(i,3) ans = max(ans, dp[N][i]);

    cout << ans << endl;

    return 0;
}