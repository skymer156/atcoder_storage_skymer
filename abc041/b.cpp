#include <iostream>
using namespace std;

int main(){
    long long A, B, C;
    cin >> A >> B >> C;

    long long mod = 1e+9+7;

    long long X = (A * B % mod * C % mod) % mod;

    cout << X << endl;

}