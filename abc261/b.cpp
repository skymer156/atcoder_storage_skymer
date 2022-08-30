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
        cin >> S[i];
    }
    
    bool flag = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if((S[i][j] == 'W') && (S[j][i] == 'L')) continue;
            if((S[i][j] == 'L') && (S[j][i] == 'W')) continue;
            if((S[i][j] == 'D') && (S[j][i] == 'D')) continue;
            flag = false;
        }
    }
    
    if(flag){
        cout << "correct" << endl;
    }else{
        cout << "incorrect" << endl;
    }

    return 0;
}