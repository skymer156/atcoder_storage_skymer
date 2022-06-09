#include <iostream>
#include <vector>
#include <string>
#include <map>

#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<long> A(N, 0);
    vector<long> B(M, 0);

    rep(i, N) cin >> A[i];
    rep(i, M) cin >> B[i];

    map<int, int> count;

    rep(i, N) count[A[i]]++;

    for (int i = 0; i < M; i++)
    {
        if (count[B[i]] == 0)
        {
            cout << "No" << endl;
            return 0;
        }
        else
        {
            count[B[i]]--;
        }
    }

    cout << "Yes" << endl;
    return 0;
}