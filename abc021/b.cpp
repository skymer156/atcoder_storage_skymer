#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int N, K, a, b;
    cin >> N >> a >> b >> K;

    vector<int> P(K, 0);

    for (auto &p : P)
    {
        cin >> p;
    }
    

    set<int> st;
    bool flag = false;
    for (int i = 0; i < K; i++)
    {
        if (st.find(P[i]) == st.end())
        {
            st.insert(P[i]);
        }

        if (P[i] == a)flag = true;
        if (P[i] == b)flag = true;
    }

    if (flag)
    {
        cout << "NO" << endl;
    }
    else if (st.size() != K)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
