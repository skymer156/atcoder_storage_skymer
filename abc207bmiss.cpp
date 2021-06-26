#include <iostream>

using namespace std;

int main()
{
    long A,B,C,D;
    cin >> A >> B >> C >> D;

    if(B > C){
        if(A + B <= D * C) cout << 1 << endl;
        else cout << -1 << endl;
    }else if(B == C){
        if(D == 1){
            cout << -1 << endl;
        }else{
            long count = 1;
        while(true){
            if(A + count * B <= count * C * D){
                cout << count << endl;
                break;
            }
            count++;
        }
        }
    }else{
        long count = 1;
        while(true){
            if(A + count * B <= count * C * D){
                cout << count << endl;
                break;
            }
            count++;
        }
    }

    return 0;
}
