#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
T gcd(T a,T b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

int main()
{
    long A,B;
    cin >> A >> B;
    cout << "gcd : " << gcd(A,B) << endl;
    cout << "lcm : " << A / gcd(A,B) * B << endl;

    return 0;
}