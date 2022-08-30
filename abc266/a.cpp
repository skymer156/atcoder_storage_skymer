#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int index = s.size() / 2;

    cout << s.substr(index, 1);
}