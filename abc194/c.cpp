#include <iostream>
#include <vector>

using namespace std;

int main(){
    long N;cin >> N;
    vector<long> A(N, 0);
    vector<long> sqAi(N, 0);
    vector<long> S(N+1, 0);
    vector<long> SumsqA(N+1, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        S[i+1] = S[i] + A[i];
        sqAi[i] = A[i] * A[i];
        SumsqA[i+1] = SumsqA[i] + sqAi[i];
    }

    
    
}