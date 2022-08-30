#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long N;
    cin >> N;
    long long A = 998244353;

    if(N % A == 0){
        cout << 0 << endl;
        return 0;
    }

    if(N > 0){
        long long m = N / A;
        long long ans = N - A * m;
        printf("%lld", ans);
    }else if(N == 0){
        cout << 0 << endl;
    }else{
        long long num = abs(N) / A;
        long long m = -num - 1;
        long long ans = N - A * m;
        printf("%lld", ans);
    }
}