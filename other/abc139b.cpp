#include <iostream>
#include <vector>

using namespace std;

int main(){
    long A,B;
    cin >> A >> B;

    int tap = 0;
    int emp = 1;

    if(emp == B){
        cout << 0 << endl;
    }else{
        while(true){
            tap ++;
            emp = (A-1)*tap + 1;
            if(emp >= B){
                cout << tap << endl;
                break;
            }
        }
    }

    return 0;
}