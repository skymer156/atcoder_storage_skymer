#include <bits/stdc++.h>

using namespace std;

int main(){
    long B,A;
    cin >> A >> B;

    if(A == 0){
        cout << "Silver" << endl;
    }else if(B == 0){
        cout << "Gold" << endl;
    }else{
        cout << "Alloy" << endl;
    }

    return 0;
}