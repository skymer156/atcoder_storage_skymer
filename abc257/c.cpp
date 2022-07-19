#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    long N;
    string S;
    cin >> N >> S;
    vector<pair<int, char>> W(N);

    long ans = 0;

    for (int i = 0; i < N; i++)
    {
        long temp;
        cin >> temp;
        W[i] = {temp, S[i]};
        if (S[i] == '1')
        {
            ans++;
        }
    }

    sort(W.begin(), W.end());

    long x = ans;
    for (int i = 0; i < N; i++)
    {
        if (W[i].second == '1')
        {
            x--;
        }
        else
        {
            x++;
        }

        if (i < (N - 1))
        {
            if (W[i].first != W[i+1].first)
            {
                ans = max(ans, x);
            }
        }
        else
        {
            ans = max(ans, x);
        }
    }

    cout << ans << endl;

    return 0;
}