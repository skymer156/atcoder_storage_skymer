#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    long X, A, D, N;
    cin >> X >> A >> D >> N;

    long normalizedX = X - A;
    if (D != 0)
    {
        if (normalizedX > 0)
        {

            if (D > 0)
            {
                // D * Nとの比較も行う
                if (normalizedX > D * (N-1))
                {
                    cout << normalizedX - D * (N-1) << endl;
                }
                else
                {
                    long out1 = (normalizedX) % D;
                    long out2 = ((normalizedX) / D + 1) * D - (normalizedX);
                    cout << min(out1, out2);
                }
            }
            else
            {
                cout << normalizedX << endl;
            }
        }
        else if (normalizedX < 0)
        {
            if (D > 0)
            {
                cout << abs(normalizedX) << endl;
            }
            else
            {

                normalizedX = abs(normalizedX);
                D = abs(D);

                if (normalizedX > D * (N-1))
                {
                    cout << normalizedX - D * (N-1) << endl;
                }
                else
                {
                    long out1 = (normalizedX) % D;
                    long out2 = ((normalizedX) / D + 1) * D - (normalizedX);
                    cout << min(out1, out2) << endl;
                }
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        cout << abs(normalizedX) << endl;
    }

    return 0;
}