
#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < (n); ++i)

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;


    int ans = 0;
    rep(i,256){
        ans = (A^i);
        if(ans == B) cout << i << endl;
    }

    return 0;
}