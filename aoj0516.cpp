// https://qiita.com/drken/items/56a6b68edef8fc605821 けんちょんさんのqiita
#include <iostream>
#include <vector>

using namespace std;
const long long INF = 1LL<<60;

int main(){
    long N,K;
    cin >> N >> K;
    vector<long> a(N);

    for(int i=0;i < N;i++)cin >> a[i];

    vector<long> s(N+1,0);

    for(int i=0;i < N;i++)s[i+1] = s[i] + a[i];

    long max = -INF;

    for(int i = 0;i <= N - K;i++){
        long val = s[K+i] - s[i];
        if (max < val) max = val;
    }

    cout << max << endl;

    return 0;
}