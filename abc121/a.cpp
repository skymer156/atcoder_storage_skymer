#include <iostream>

using namespace std;

int main()
{
    int X, Y, N;
    cin >> X >> Y >> N;

    if(3 * X <= Y){
        int ans = N * X;
        cout << ans;
    }else{
        int ans = (N / 3) * Y + (N % 3) * X;
        cout << ans;
    }

}