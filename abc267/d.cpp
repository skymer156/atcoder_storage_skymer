#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long N, M;
    cin >> N >> M;

    vector<long> A(N, 0);

    for (auto &a : A)
    {
        cin >> a;
    }

    // コンテスト中メモ
    // ある値を抜いた時に最大となるものを選ぶ?
    // 少なくともN-M抜く必要がある
    // 抜く前後の値の変化は漸化式で表現することが可能.
    
    // コンテスト後メモ
    // 抜く -> 追加していくに考え方を変える.

    vector<vector<long long>> dp(2001, vector<long long>(2001, 0));

    dp[0][0] = 0;
    dp[0][1] = -1000000000000000000ll;

    // 数列を全走査
    for (int i = 1; i <= N; i++)
    {
        // i個めまでにj選んでいる時の重み付け和の値.
        // わざわざmまでとかやらなくてもよく、nまでやっても問題なし。(答えの時にdp[n][m]を見るため)
        for (int j = 0; j <= N; j++)
        {
            // 何も選んでいない
            if (j == 0)
                dp[i][0] = 0;
            // 数列の数より選んだ数の方が多い
            else if (j > i)
                dp[i][j] = -1000000000000000000ll;
            // i >= j で j!= 0の時。
            else
                // A[i]を選択しなかった時 : dp[i-1][j] (前と変わらない), A[i]を選択した時 : dp[i-1][j-1] + a[i-1] * j (一番右にj番目の値が追加される.)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1] + A[i - 1] * j);
        }
    }
    cout << dp[N][M] << endl;

    return 0;
}