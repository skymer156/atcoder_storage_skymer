#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    vector<string> S(H, "");
    vector<pair<int, int>> point;

    for (int i = 0; i < H; i++)
    {
        cin >> S[i];
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (S[i][j] == 'o')
            {
                point.push_back(make_pair(i, j));
            }
        }
    }

    int height = abs(point[0].first - point[1].first);
    int width = abs(point[0].second - point[1].second);

    cout << height + width << endl;

    return 0;
}