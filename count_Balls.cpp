#include <iostream>
using namespace std;

int main()
{
    int N,A,B;

    cin >> N >> A >> B;

    int ans = (N / (A + B))*A;
    int rem = N % (A + B);
    ans += min(rem,A);
    cout << ans;
    
    return 0;
}