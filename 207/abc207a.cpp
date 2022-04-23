#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    int A,B,C;
    cin >> A >> B >> C;
    
    a.push_back(A);
    a.push_back(B);
    a.push_back(C);

    sort(a.begin(),a.end());

    cout << a[1] + a[2] << endl;

    return 0;
}
