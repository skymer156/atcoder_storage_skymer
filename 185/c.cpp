#include <iostream>

using namespace std;

long long rec(long N){
    if(N == 1) return 1;
    return N * rec(N-1);
}

int main(){
    int L;
    cin >> L;

    // L -1 と 11 の L-1 C 11 を計算する.
    long long calc = 1;
    for (int i = 1; i <= 11; i++)
    {
        calc = calc * (L-i) / i;
    }
    
    printf("%lld", calc);

}