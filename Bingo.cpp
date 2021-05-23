#include<iostream>
using namespace std;

int main(){
    int A[3][3],B[10];
    int N;
    bool appear[3][3];

    for (int i = 0; i < 3; i++)
    {
        cin >> A[i][0] >> A[i][1] >> A[i][2];
    }
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            appear[i][j] = false;
            for (int k = 0; k < N; k++)
            {
                if (A[i][j] == B[k])
                {
                    appear[i][j] = true;
                }
                
            }
            
        }
        
    }

    string ANS = "No";
    for (int i = 0; i < 3; i++)
    {
        if (appear[i][0] and appear[i][1] and appear[i][2])
        {
            ANS = "Yes";
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        if (appear[0][i] and appear[1][i] and appear[2][i]){
            ANS = "Yes";
        }
    }
    if (appear[0][0] and appear[1][1] and appear[2][2])
    {
        ANS = "Yes";
    }

    cout << ANS;
    return 0;
}