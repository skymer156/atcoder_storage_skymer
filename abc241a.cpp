#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a(10, 0);

    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }

    cout << a[a[a[0]]] << endl;

    return 0;
}