#include <iostream>
#include <vector>

using namespace std;

int main(){
    long N;
    cin >> N;

    vector<long> p(N,0);
    for (auto &&dish : p)
    {
        cin >> dish;
    }

    cout << -1 % 4;
    

}