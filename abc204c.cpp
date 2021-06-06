#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    vector<int> A,B;
    for(int i=0;i < M;i++){
        int a,b;
        cin >> a >> b;
        A.push_back(a);
        B.push_back(b);
    }

    return 0;
}