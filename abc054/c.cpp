#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> Graph(N + 1);

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        Graph[a].push_back(b);
        Graph[b].push_back(a);
    }

    stack<int> st;
    st.push(1);

    vector<int> seen(N + 1, 0);
    seen[1] = 0;

    bool all_visted = false;
    int ans = 0;
    while (!st.empty())
    {
        int v = st.top();
        st.pop();
        seen[v]++;

        for (auto &&next_V : Graph[v])
        {
            if(all_visted){
                ans++;
                continue;
            }

            if (seen[next_V] != 0)
            {
                continue;
            }

            st.push(next_V);
        }
    }

    int ans = 1;
    for (int i = 1; i < N+1; i++)
    {
        if(seen[i] == 0){
            all_visted = false;
            ans *= seen[i];
        }
    }

    if(all_visted){
        cout << ans << endl;
    }else{
        cout << 0 << endl;
    }
    
}