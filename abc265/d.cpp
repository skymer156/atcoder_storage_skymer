#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    long long N, P, Q, R;
    cin >> N >> P >> Q >> R;
    vector<long> A(N);
    set<long long> S;

    long long sum_A = 0;
    for (long long i = 0; i < N; i++)
    {
        cin >> A[i];
        sum_A += A[i];
        S.insert(sum_A);
    }

    for (auto &x : S)
    {
        long long y = x + P;
        long long z = y + Q;
        long long w = z + R;
        if (S.find(y) != S.end() && S.find(z) != S.end() && S.find(w) != S.end())
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}