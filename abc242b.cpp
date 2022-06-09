#include <iostream>

using namespace std;

int main()
{
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    if (X <= A)
    {
        cout << float(1) << endl;
    }
    else if (A < X && X <= B)
    {
        cout << float(C) / float(B - A) << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}