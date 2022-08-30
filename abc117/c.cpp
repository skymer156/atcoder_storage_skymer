#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long N;
    cin >> N;

    vector<long> A(N, 0);
    vector<long long> S(N + 1, 0);
    vector<long long> B(N, 0);

    const long long modi = 1000000007;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        S[i + 1] = S[i] + A[i];
    }

    for (int i = 1; i < N; i++)
    {
        B[i] = (S[N] - S[i]) % modi;
    }

    long long ans = 0;
    for (int i = 1; i < N; i++)
    {
        ans += (A[i-1] * B[i]) % modi;
    }
    ans %= modi;

    cout << ans << endl;
}