#include <iostream>
#include <vector>
#include <cstdlib>

#define rep(i,n) for (int i = 0; i < (n); ++i)

using namespace std;

long min(long a,long b){
    if(a <= b){
        return a;
    }else{
        return b;
        }
}

int main(){
    long N;
    cin >> N;

    vector<long> dp(N+1,0);
    vector<long> h(N+1,0);

    rep(i,N) cin >> h[i+1];
    h[0] = h[1];

    rep(i,N-1) {
        dp[i+2] = min( dp[i+1] + abs( h[i+2] - h[i+1] ) , dp[i] + abs( h[i+2] - h[i] ));
    }

    cout << dp[N] << endl;

    return 0;
}