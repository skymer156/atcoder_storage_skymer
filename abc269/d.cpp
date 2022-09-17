#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <unordered_map>

using namespace std;

const int offset = 1500;

void bfs(pair<int, int> &index, vector<vector<int>> &seen, vector<vector<int>> &black)
{
    int di[6] = {-1, -1, 0, 0, 1, 1};
    int dj[6] = {-1, 0, -1, 1, 0, 1};

    queue<pair<int, int>> que;

    que.push(index);

    while (!que.empty())
    {
        auto next_p = que.front();
        que.pop();

        // 到達したらseenに入れる.
        seen[next_p.first + offset][next_p.second+offset] = 1;

        for (int i = 0; i < 6; i++)
        {
            int next_i = next_p.first + di[i];
            int next_j = next_p.second + dj[i];
            auto new_pair = make_pair(next_i, next_j);

            // 既に見た
            if (seen[new_pair.first + offset][new_pair.second + offset] == 1)continue;

            // 黒色じゃない
            if (black[new_pair.first + offset][new_pair.second + offset] != 1)continue;

            que.push(new_pair);
        }
    }
}

int main()
{
    int N;
    cin >> N;

    vector<pair<int, int>> mass;

    for (int i = 0; i < N; i++)
    {
        int X, Y;
        cin >> X >> Y;
        mass.push_back({X, Y});
    }

    vector<vector<int>> black_pair(3000, vector<int>(3000, 0));

    for(auto &v: mass){
        black_pair[v.first+offset][v.second+offset] = 1;
    }

    vector<vector<int>> seen(3000, vector<int>(3000, 0));
    long cnt = 0;
    for (auto &p : mass)
    {
        if (seen[p.first + offset][p.second + offset] == 1)continue;

        bfs(p, seen, black_pair);
        cnt++;
    }

    cout << cnt << endl;
}