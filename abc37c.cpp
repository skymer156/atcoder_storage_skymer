#include <iostream>
#include <vector>

using namespace std;

int main(){
    long N,K;
    cin >> N >> K;

    vector<long> a(N);

    for(int i=0;i < N;i++){
        cin >> a[i];
    }

    vector<long> s(N+1,0);

    for(int i=0;i < N;i++){
        s[i+1] = s[i] + a[i];
    }

    long sum = 0;

    for(int i=0;i <= N - K;i++){
        long val = s[K+i] - s[i];
        sum += val;
    }

    cout << sum << endl;

    return 0;
}