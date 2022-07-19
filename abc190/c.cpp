#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M, K;
    cin >> N >> M;

    vector<int> A(M);
    vector<int> B(M);

    for (int i = 0; i < M; i++)
    {
        cin >> A[i] >> B[i];
    }

    cin >> K;
    vector<int> C(K);
    vector<int> D(K);

    for (int i = 0; i < K; i++)
    {
        cin >> C[i] >> D[i];
    }

    // どちらか一方は0と1で判別可能。
    // 一個の条件に対して全ての組み合わせを計算しても、高々100 * (2 ^ 16) = 6.6*10^6

    int ans = 0;
    for (int i = 0; i < (1 << K); i++)
    {
        vector<int> dish(N + 1, 0);
        for (int k = 0; k < K; k++)
        {
            // C
            if (i & (1 << k))
            {
                dish[C[k]] = 1;
                // D
            }
            else
            {
                dish[D[k]] = 1;
            }
        }
        int count = 0;
        for (int j = 0; j < M; j++)
        {
            if ((dish[A[j]] == 1) && (dish[B[j]] == 1))
                count++;
        }
        if (ans < count)
            ans = count;
    }

    cout << ans << endl;
}