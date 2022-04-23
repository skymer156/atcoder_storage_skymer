// re-learning

#include <iostream>
#include <vector>

#define rep(i,n) for (int i = 0; i < (n); ++i)

using namespace std;

int main(){
    string s;
    cin >> s;

    int N = s.size();

    vector<vector<int>> dp(N+1,vector<int>(9));
    rep(i,N+1) dp[i][0] = 1;
    const int mod = 1000000007;
    string t = "chokudai";
    rep(i,N)rep(j,8) {
        if(s[i] != t[j]){
            dp[i+1][j+1] = dp[i][j+1];
        }else{
            dp[i+1][j+1] =  ( dp[i][j+1] + dp[i][j] ) % mod;
        }
    }

    cout << dp[N][8] << endl;

    return 0;
}