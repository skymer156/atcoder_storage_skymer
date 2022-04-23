#include <iostream>
using namespace std;

//kadai=>O(1)で実行したい。一発で求まる式を用いる。

int main(){
    int A, B;

    cin >> A >> B;

    for (int i = 1; i < 1010; i++)
    {
        if((int(float(i)*0.08) == A) && (int(float(i)*0.1) == B)){
            cout << i;
            return 0;
        }
    }
    
    cout << -1;

    return 0;

}
