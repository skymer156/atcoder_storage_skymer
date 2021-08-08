#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < (n); ++i)

using namespace std;

int main(){
    int H,W,N;
    cin >> H >> W >> N;

    vector<long> A(N,0);
    vector<long> B(N,0);
    vector<long> Row(N,0);
    vector<long> Col(N,0);

    rep(i,N) cin >> A[i] >> B[i];

    vector<long> indices_a(A.size());
    vector<long> indices_b(B.size());

    iota( indices_a.begin(),indices_a.end(),0 );
    iota( indices_b.begin(),indices_b.end(),0 );

    sort( indices_a.begin(), indices_a.end(), [&A](size_t i1, size_t i2){
        return A[i1] < A[i2];
    });

    sort( indices_b.begin(), indices_b.end(), [&B](size_t i1, size_t i2){
        return B[i1] < B[i2];
    });

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    rep(i,N) {
        Row[ indices_a[i] ] = i + 1;
        Col[ indices_b[i] ] = i + 1;
    }

    rep(i,N) cout << Row[i] << ' ' << Col[i] << endl;

    return 0;
}