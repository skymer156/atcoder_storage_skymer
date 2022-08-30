#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


// 累積和問題
int main()
{
    long N, L, R;
    cin >> N >> L >> R;
    vector<long> A(N);
    vector<long> origin_sum(N,0);

    for(int i=0;i<N;i++){
        if(i == 0){
            cin >> A[i];
            origin_sum[i] = A[i];
        }else{
            cin >> A[i];
            origin_sum[i] = origin_sum[i-1] + A[i];
        }
    }

    

}