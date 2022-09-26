#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    bool flag1 = false;
    bool flag2 = false;
    bool flag3 = false;

    if(a % 2 == 1 || b % 2 == 1) flag1 = true;

    if(a % 2 == 1)a--;
    if(b % 2 == 1)b--;

    if(a == 2 || b == 2) flag2 = true;
    if(a == 4 || b == 4) flag3 = true;
    if(a == 6 || b == 6){
        flag2 = true;
        flag3 = true;
    }

    int ans = 0;
    if(flag1)ans += 1;
    if(flag2)ans += 2;
    if(flag3)ans += 4;

    cout << ans << endl;
    

}