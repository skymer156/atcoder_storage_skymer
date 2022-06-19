#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    double d = sqrt(pow(A, 2) + pow(B, 2));
    printf("%.10lf %.10lf", (A / d), (B / d));
    return 0;
}