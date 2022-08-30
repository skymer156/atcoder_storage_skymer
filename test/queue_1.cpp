#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    pair<int, int> pa;
    int a, b;
    cout << "input two integer with space decimiter" << endl;
    cin >> a >> b;
    // ヘルパー関数
    pa = make_pair(a, b);

    cout << pa.first << endl;
    cout << pa.second << endl;

    // ()でコンストラクタ
    auto pa2 = pair<string, string>("const", "ractor");

    cout << pa2.first << endl;
    cout << pa2.second << endl;

    queue<int> que;

    que.push(1);
    cout << que.front() << " size :" << que.size() << endl;
    que.push(2);
    cout << que.front() << " size :" << que.size() << endl;
    que.push(3);
    cout << que.front() << " size :" << que.size() << endl;

    while (!que.empty())
    {
        cout << que.front() << " size :" << que.size() << endl;
        que.pop();
    }
}