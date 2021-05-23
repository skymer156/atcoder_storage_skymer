#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long N, M;
    cin >> N >> M;
    vector<long> L;
    vector<long> R;

    for (int i = 0; i < M; i++)
    {
        long l, r;
        cin >> l >> r;
        L.push_back(l);
        R.push_back(r);
    }

    sort(L.begin(), L.end());
    sort(R.begin(), R.end());

    long min = L.back();
    long max = R.front();

    if (max - min < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << max - min + 1 << endl;
    }

    return 0;
}