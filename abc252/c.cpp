#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
      	string s;
      	cin >> s;
        S.push_back(s);
    }

    vector<int> cost(10,0);

    // 0~9まで
    for(int i=0; i < 10; i++){
        
        // ある数値が各列に何回出ているか数えあげ.
        vector<int> info(10,0);
        for (int j = 0; j < 10; j++)
        {
            int colcnt = 0;
            for (int k = 0; k < N; k++)
            {
                if(int(S[k][j]) == i){
                    colcnt ++;
                  	cout << S[k][j];
                }
            }
            info[j] = colcnt;
        }

        // 最大重なり数と位置を求める.
        int max = 0;
        int maxindex = 0;
        for (int i=0;i < 10; i++)
        {
            if(max <= info[i]){
                max = info[i];
                maxindex = i;
            }
        }
        
        if(max >= 2){
            cost[i] = 10 * (max - 1) + maxindex;
        }else{
            // 最後にinfoの値がある位置.
            int lastindex = 0;
            for(int i=0; i < 10; i++){
                if(info[i] == 1) lastindex = i;
            }
            cost[i] = lastindex;
        }
      	cout << cost[i] << endl;
    }

    long mincost = 100000000;
    for (auto &&i : cost)
    {
        if(mincost > i){
            mincost = i;
        }
    }
    
    cout << mincost;

    return 0;
}