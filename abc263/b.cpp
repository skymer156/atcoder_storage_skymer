#include <iostream>
#include <vector>

using namespace std;

int recursive(vector<int> &parents, int in){
    if(in == 1) return 1;
    return recursive(parents, parents[in]) + 1;
}


int main()
{
    int N;
    cin >> N;
    vector<int> P(N+1, -1);

    for (int i = 2; i <= N; i++)
    {
        cin >> P[i];
    }
    
    cout << recursive(P, N) - 1;

    return 0;
}