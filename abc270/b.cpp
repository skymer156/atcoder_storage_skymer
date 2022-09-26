#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;

    if(x > 0){
        if(y > 0 && x > y){
            if(y > z){
                if(z < 0){
                    cout << abs(z) * 2 + x;
                }else{
                    cout << x;
                }
            }else{
                cout << -1;
            }
        }else{
            cout << x;
        }
    }else{
        if(x < y && y < 0){
            if(y < z){
                if(0 < z){
                    cout << abs(z) * 2 + abs(x);
                }else{
                    cout << abs(x);
                }
            }else{
                cout << -1;
            }
        }else{
            cout << abs(x);
        }
    }

}