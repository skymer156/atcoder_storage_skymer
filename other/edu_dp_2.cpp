// i番目からi+j番目に向かう時のコストをdp配列に格納し、今までの値と比較する
// iは0からN-1まで、jは1からKまで毎回考えればO(N*K)
// dp配列は領域外も計算するので、大きめに確保する

#include <iostream>
#include <vector>
#include <cstdlib>

#define rep(i,n) for (int i = 0; i < (n); ++i)

using namespace std;

const long long INF = 1LL << 60;

long min(long a,long b){
    if(a <= b){
        return a;
    }else{
        return b;
        }
}

int main(){
    long N,K;
    cin >> N >> K;

    vector<long> dp(N+400,0);
    vector<long> h(N+400,0);

    rep(i,N) cin >> h[i];
    
    rep(i,N) dp[i] = INF;
  
  	dp[0] = 0;

    // jは1からKまで考えたいので、添え字jを配列ではj+1で記載する
    rep(i,N) rep(j,K) {
      dp[i + j + 1] = min(dp[i + j + 1], dp[i] + abs(h[i] - h[i + j + 1]));
    }

    cout << dp[N-1] << endl;

    return 0;
}