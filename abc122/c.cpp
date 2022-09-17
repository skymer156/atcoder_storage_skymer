#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    long N, Q;
    cin >> N >> Q;

    string S;
    cin >> S;

    vector<long> l(Q,0);
    vector<long> r(Q,0);

    for (int i = 0; i < Q; i++)
    {
        cin >> l[i] >> r[i];
    }

    vector<string> s_sum(Q, "");

    
    

}