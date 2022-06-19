#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(3000, 0);
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        A[temp] = 1;
    }

    for (int i = 0; i < 2001; i++)
    {
        if(A[i] != 1){
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}