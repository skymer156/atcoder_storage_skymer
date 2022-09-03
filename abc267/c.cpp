#include <iostream>
#include <vector>
#include <algorithm>

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
    
    vector<long> sum(N-M+1, 0);

    for (int i = 0; i < M; i++)
    {
        sum[0] += A[i];
    }

    for (int i = 1; i < N-M+1; i++)
    {
        sum[i] = sum[i-1] + A[M+i-1] - A[i-1];
    }

    vector<long> C(N -M + 1, 0);

    for (int i = 0; i < M; i++)
    {
        C[0] += (i+1) * A[i];
    }
    
    for (int k = 0; k < N-M; k++)
    {
        C[k+1] = C[k] - sum[k] + M*A[k+M];
    }    
    
    auto ans = max_element(C.begin(), C.end());

    cout << *ans << endl;

    return 0;
}