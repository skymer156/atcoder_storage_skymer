#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x;
    vector<int> A;
    cin >> x;
    for(int i =0;i < x;i++){
        int a = 0;cin >> a;
        A.push_back(a);
    }

    long count = 0;

    for (int i =0;i < x;i++){
        if(A[i] > 10){
            count += A[i] - 10;
        }
    }

    cout << count << endl;

    return 0;
}