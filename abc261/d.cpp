#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<long> X(N,0);
    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
    }

    vector<long> addition(N+1, 0);
    
    for (int i = 0; i < N; i++)
    {
        int C;
        long Y;
        cin >> C >> Y;
        addition[C] = Y;
    }
    
    vector<vector<long>> dp_cost(N+1, vector<long>(N+1, -1));
    vector<vector<bool>> dp(N+1, vector<bool>(N+1, false));

    dp_cost[0][0] = 0;
    dp[0][0] = true;


    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N+1; j++)
        {
            if(!dp[i][j])  continue;

            // ura
            dp[i+1][0] = true;
            dp_cost[i+1][0] = max(dp_cost[i+1][0], dp_cost[i][j]);

            // omote
            dp[i+1][j+1] = true;
            dp_cost[i+1][j+1] = max(dp_cost[i+1][j+1], dp_cost[i][j] + X[i] + addition[j+1]);

        }
        
    }
    
    long ans = *max_element(dp_cost[N].begin(), dp_cost[N].end());
    cout << ans << endl;
}