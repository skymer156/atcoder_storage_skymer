#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long N;cin >> N;
    vector<long> t;
    vector<long> x;
    vector<long> y;
    t.push_back(0);
    x.push_back(0);
    y.push_back(0);

    for (int i=0;i < N ;i++){
        long T,X,Y;cin >> T >> X >> Y;
        t.push_back(T);
        x.push_back(X);
        y.push_back(Y);
    }

    bool success = true;
    for(int i=0;i < N;i++){
        int delta_t = t[i+1] - t[i];
        int distance = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
        if(delta_t < distance) success = false;
        if(delta_t % 2 != distance % 2) success = false;
    }

    if(success) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}