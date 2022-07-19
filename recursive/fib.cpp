#include <iostream>

using namespace std;

int sum_n(int n){
    if(n == 0) return 0;
    return n + sum_n(n - 1);
}

int fib(int n){
    if(n == 0) return 0;
    else if (n == 1) return 1;
    return fib(n-1) + fib(n- 2);
}

int main(){
    int n;
    cin >> n;
    cout << "sum : " << sum_n(n) << endl;
    cout << "fib : " << fib(n) << endl;
}