#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    long N;
    cin >> N;
    vector<long> A;
    for(int i = 0;i<N;i++){
        long B;
        cin >> B;
        A.push_back(B);
    }

    vector<long> A_rev = A;
    reverse(A_rev.begin(),A_rev.end());

    vector<pair<long,long>> pair_vec;

    for(int i=0;i<(N+1)/2;i++){
        if(A[i] != A_rev[i]){
            long a,b;
            if(A[i]>A_rev[i]){
                a = A[i];
                b = A_rev[i];
            }else{
                b = A[i];
                a = A_rev[i];
            }
            pair_vec.push_back(pair(a,b));
        }
    }

    return 0;
}
