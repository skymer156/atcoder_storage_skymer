#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long N, M, T;
    cin >> N >> M >> T;
    vector<long> A(N + 1);
    vector<long> Cost(N + 1, 0);

    for (int i = 0; i < N - 1; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < M; i++)
    {
        long x, y;
        cin >> x >> y;
        Cost[x] = y;
    }

    long time = T;
    for (int i = 0; i < N - 1; i++)
    {
        time = time - A[i];
        if (time <= 0)
        {
            cout << "No" << endl;
            return 0;
        }

        time = time + Cost[i + 2];
    }

    cout << "Yes" << endl;
}