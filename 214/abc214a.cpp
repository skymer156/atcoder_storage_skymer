
#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < (n); ++i)

using namespace std;

int main(){
    int N;
    cin >> N;

    if( (1 <= N) && ( N <= 125 ) ){
        cout << 4 << endl;
    }else if( N <= 211){
        cout << 6 << endl;
    }else{
        cout << 8 << endl;
    }

    return 0;
}