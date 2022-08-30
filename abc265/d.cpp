#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long N, P, Q, R;
    cin >> N >> P >> Q >> R;
    vector<long> A(N);
    vector<long long> B(N+1);
    B[0] = 0;
    for(long long i=0; i<N;i++){
        cin >> A[i];
        B[i+1] = B[i] + A[i];
    }



    return 0;
}