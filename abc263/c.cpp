#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    for (int bit = (1 << M) - 1; bit > 0; --bit)
    {
        int cnt = 0;
        for (int i = 0; i < M; i++)
        {
            if(bit & (1<< i)) cnt++;
        }
        if(cnt != N) continue;

        vector<int> S;
        for (int i = 0; i < M; i++)
        {
            if(bit & (1<< (M-1 - i))) S.push_back(i+1);
        }

        for (int i = 0; i < (int)S.size(); ++i) {
            cout << S[i] << " ";
        }
        cout << endl;
        
    }

    return 0;
}