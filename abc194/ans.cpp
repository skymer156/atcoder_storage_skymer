#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long N;
    cin >> N;
    vector<long> A(N, 0);
    vector<long> count(401, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        // -200 to 0.
        count[A[i]+200]++;
    }

    long long ans = 0;
    for (int i = 0; i < count.size(); i++)
    {
        for (int j = i+1; j < count.size(); j++)
        {
            if(i == j) continue;
            long long sq = abs(i - 200 - j + 200);
            ans += count[i] * count[j] * sq * sq;
        }
    }
    
    cout << ans;


}