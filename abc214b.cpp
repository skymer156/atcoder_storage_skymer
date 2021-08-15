
#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < (n); ++i)

using namespace std;

int main(){
    int S, T;
    cin >> S >> T;


    long count = 0;
    rep(a,101) rep(b,101) rep(c,101) {
        if( ( a+b+c <= S ) && ( a*b*c <= T ) ) count++;
    }

    cout << count << endl;

    return 0;
}