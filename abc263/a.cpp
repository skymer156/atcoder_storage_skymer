#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int L1, R1, L2, R2;
    cin >> L1 >> R1 >> L2 >> R2;

    int Lmax = max(L1, L2);
    int Rmin = min(R1, R2);

    if((R1 <= L2) || (R2 <= L1)){
        cout << 0 << endl;
    }else{
        cout << Rmin - Lmax << endl;
    }

    return 0;
}