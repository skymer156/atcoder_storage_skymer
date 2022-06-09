#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    
    cout << s[0] << endl;
    cout << s[0][1] << endl;

    return 0;
}