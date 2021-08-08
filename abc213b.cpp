#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < (n); ++i)

using namespace std;


int main(){
    int N;
    cin >> N;

    vector<long> A(N,0);

    long max = 0;
    rep(i,N) {
        cin >> A[i];
        if(A[i] > max) max = A[i];
    }

    long ans = 0;
    long ind = 0;
    rep(i,N){
        if( max > A[i] && A[i] > ans ){
            ans = A[i];
            ind = i;
        }
    }

    cout << ind + 1 << endl;

    return 0;
}