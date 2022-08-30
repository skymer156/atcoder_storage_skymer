#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    vector<string> G;
    for (int i = 0; i < H; i++)
    {
        string s;
        cin >> s;
        G.push_back(s);
    }

    vector<vector<int>> grid(H, vector<int>(W, 0));

    queue<pair<int, int>> que;
    que.push(make_pair(0, 0));

    pair<int, int> ans = {0, 0};

    while (!que.empty())
    {
        pair<int, int> p = que.front();
        que.pop();

        if (grid[p.first][p.second] == 1)
        {
            cout << -1 << endl;
            return 0;
        }

        if(G[p.first][p.second] == 'U' && p.first > 0){
            que.push(make_pair(p.first - 1, p.second));
        }else if(G[p.first][p.second] == 'D' && p.first < H - 1){
            que.push(make_pair(p.first + 1, p.second));
        }else if(G[p.first][p.second] == 'L' && p.second > 0){
            que.push(make_pair(p.first, p.second - 1));
        }else if(G[p.first][p.second] == 'R' && p.second < W - 1){
            que.push(make_pair(p.first, p.second + 1));
        }else{
            ans = p;
            break;
        }

        grid[p.first][p.second] = 1;
    }

    cout << ans.first+1 << " " << ans.second+1 << endl;
}