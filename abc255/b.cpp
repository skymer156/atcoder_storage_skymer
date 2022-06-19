#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> A(K,0);
    vector<long> X(N,0);
    vector<long> Y(N,0);

    for (int i = 0; i < K; i++)
    {
        cin >> A[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        cin >> X[i] >> Y[i];
    }
    
    double answermax = 0;
    for (int i = 0; i < N; i++)
    {
        double eachmin = 1e+12;
        for (int j = 0; j < K; j++)
        {
            double distance = pow(X[i] - X[A[j]-1], 2) + pow(Y[i] - Y[A[j]-1], 2);
            eachmin = min(eachmin, distance);
        }
        answermax = max(eachmin, answermax);
    }
    
    cout << printf("%.10lf", sqrt(answermax)) << endl;

    return 0;
}