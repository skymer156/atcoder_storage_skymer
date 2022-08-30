#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    long N;
    cin >> N;
    map<string, int> ma{};

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        if(ma.find(s) == ma.end()){
            ma[s] = 0;
            cout << s << endl;
        }else{
            ma[s]++;
            cout << s + "(" + to_string(ma[s]) + ")" << endl;
        }
    }
    

    return 0;
}