#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    long N;
    cin >> N;
    map<long, pair<int, long>> ma;

    long t_max = 0;
    for (long i = 0; i < N; i++)
    {
        long t, a;
        int x;

        cin >> t >> x >> a;
        ma[t] = {x, a};
        t_max = max(t_max, t);
    }

    vector<vector<long long>> dp(t_max + 1, vector<long long>(5, 0));
    vector<vector<long>> dp_check(t_max + 1, vector<long>(5, 0));

    dp_check[0][0] = 1;

    for (long i = 0; i < t_max; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (dp_check[i][j] == 0)continue;

            for (int k = -1; k < 2; k++)
            {
                int index = j + k;
                if (index < 0)continue;
                if (index >= 5)continue;
                dp_check[i + 1][index] = 1;
                //cout << "i " << i << " j " << j << " index " << index << endl;

                // 次の時刻 i+1 にすぬけ君が出てくるか
                if (ma.find(i + 1) != ma.end())
                {
                    // その座標は何か
                    if (ma[i + 1].first != index){
                        dp[i + 1][index] = max(dp[i + 1][index], dp[i][j]);
                        continue;
                    };

                    // その座標の時, 前の値+Aと現在の値のmaxを取る
                    dp[i + 1][index] = max(dp[i + 1][index], dp[i][j] + ma[i + 1].second);
                }
                else
                {
                    dp[i + 1][index] = max(dp[i + 1][index], dp[i][j]);
                }
            }
        }
    }

    auto ans = max_element(dp[t_max].begin(), dp[t_max].end());

    cout << *ans << endl;

    // for (auto &&i : dp)
    // {
    //     for (auto &&d : i)
    //     {
    //         cout << d << " ";
    //     }
    //     cout << endl;
    // }
    
    // for (auto &&i : dp_check)
    // {
    //     for (auto &&d : i)
    //     {
    //         cout << d << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}