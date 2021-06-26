#include <iostream>

using namespace std;

int main()
{
    long A,B,C,D;
    cin >> A >> B >> C >> D;

    if(B == C * D){
        cout << -1 << endl;
    }else if(B > C * D){
        cout << -1 << endl;
    }else{
        long count = 1;
        while (true)
        {
            if(A + count * (B - C * D) <= 0){
                cout << count << endl;
                break;
            }
            count++;
        }
        
    }

    return 0;
}
