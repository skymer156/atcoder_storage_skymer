#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

int main(){
    long N;cin >> N;
    vector<long> C;

    long ans = 1;

    for(int i=0;i < N ;i++){
        long c;cin >> c;
        C.push_back(c);
    }

    sort(C.begin(),C.end());

    for(int i =0;i<N;i++){
        if(C[i] <= i){
            cout << 0 << endl;
            return 0;
        }
        ans *= C[i] - i;
        ans %= MOD;
    }

    cout << ans << endl;
    
    return 0;
}