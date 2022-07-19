#include <iostream>
#include <vector>

using namespace std;

long long fib_memo(int n, vector<long long> &memo){
    if(n == 0) return 0;
    else if (n == 1) return 1;
    
    if(memo[n] != -1) return memo[n];

    return memo[n] = fib_memo(n-1, memo) + fib_memo(n-2, memo);

}

int main(){
    int n;
    cin >> n;

    vector<long long> memo(n+ 10, -1);

    cout << "fib : " << fib_memo(n, memo) << endl;
}