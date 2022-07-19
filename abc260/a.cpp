#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s[0] == s[1])
    {
        if (s[1] == s[2])
        {
            cout << -1 << endl;
        }
        else
        {
            cout << s[2] << endl;
        }
    }
    else if (s[1] == s[2])
    {
        if (s[2] == s[0])
        {
            cout << -1 << endl;
        }
        else
        {
            cout << s[0] << endl;
        }
    }
    else if (s[2] == s[0])
    {
        if (s[0] == s[1])
        {
            cout << -1 << endl;
        }
        else
        {
            cout << s[1] << endl;
        }
    }
    else
    {
        cout << s[0] << endl;
    }
}