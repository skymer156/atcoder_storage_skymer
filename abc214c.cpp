
#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < (n); ++i)

using namespace std;

int main(){
    long N;
    cin >> N;
    vector<long> s(N,0);
    vector<long> t(N,0);
    vector<long> sum_t(N + 1,0);
    vector<long> dp(N,0);

    rep(i,N) cin >> s[i];
    rep(i,N) cin >> t[i];

    rep(i,N-1) sum_t[N - 1 - i] += sum_t[ N - i] + s[N - 1 - i];
    rep(i,N) sum_t[i] += t[i];

    dp[0] = *min_element(sum_t.begin(), sum_t.end() - 1 );

    for (int i =1;i<N;i++){
        if(t[i] <= dp[i-1] + s[i-1]){
            dp[i] = t[i];
        }else{
            dp[i] = dp[i-1] + s[i-1];
        }
    }

    rep(i,N) cout << dp[i] << endl;

    return 0;
}