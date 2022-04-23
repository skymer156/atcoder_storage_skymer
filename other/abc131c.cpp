#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long GCD(long a,long b){
    if(b == 0) return a;
    return GCD(b,a%b);
}

long func(long x,long a,long b,long c){
    if(x==0) return 0;
    long ans = x -( x / a + x / b ) + x / c;
    return ans;
}

int main()
{
    long A,B,C,D;
    cin >> A >> B >> C >> D;

    long gcd = GCD(C,D);
    long lcm = C / gcd * D;
    long ans_a = func(A-1,C,D,lcm);
    long ans_b = func(B,C,D,lcm);

    cout << ans_b - ans_a << endl;

    return 0;
}