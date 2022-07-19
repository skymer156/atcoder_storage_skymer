#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;

    vector<int> k(M, 0);
    vector<vector<int>> s(M, vector<int>(N, 0));

    for (int i = 0; i < M; i++)
    {
        cin >> k[i];
        for (int j = 0; j < k[i]; j++)
        {
            cin >> s[i][j];
        }
    }
    
    vector<int> p(M,0);

    for (int i = 0; i < p.size(); i++)
    {
        cin >> p[i];
    }
    

    int ans = 0;
    for (int bit = 0; bit < (1 << N); bit++)
    {
        vector<int> swi(N, 0);
        for (int i = 0; i < N; i++)
        {
            if(bit & (1 << i)){
                swi[i] = 1;
            }
        }
        
        // 全電球分
        int count_bulb = 0;
        for (int j = 0; j < M; j++)
        {
            // 各スイッチのチェック
            int judge = 0;
            for (int l = 0; l < k[j]; l++)
            {
                if (swi[s[j][l] - 1] == 1)
                {
                    judge ++;
                }
            }
            if (judge % 2 == p[j])
            {
                count_bulb ++;
            }
        }
        
        if(count_bulb == M){
            ans ++;
        }
    }
    cout << ans << endl;
}