#include <iostream>
#include <string>
#include <queue>
#include <map>

using namespace std;

int main()
{
    string S;
    cin >> S;

    queue<string> que;
    que.push(S);
    map<string, int> mp;
    mp[S] = 0;

    while (!que.empty())
    {
        string target = que.front();
        que.pop();
        for (int i = 0; i < 6; i++)
        {
            string next = target;
            swap(next[i], next[i + 1]);

            if (mp.find(next) == mp.end())
            {
                que.push(next);
                mp[next] = mp[target] + 1;
            }

            if (next == "atcoder")
            {
                cout << mp[next] << endl;
                return 0;
            }
        }
    }

    return 0;
}