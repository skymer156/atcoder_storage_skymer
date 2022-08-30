#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int H1, W1;
    int H2, W2;
    cin >> H1 >> W1;

    vector<vector<long>> A(H1, vector<long>(W1, 0));

    for (int i = 0; i < H1; i++)
    {
        for (int j = 0; j < W1; j++)
        {   
            cin >> A[i][j];
        }
    }
    
    cin >> H2 >> W2;
    vector<vector<long>> B(H2, vector<long>(W2, 0));

    for (int i = 0; i < H2; i++)
    {
        for (int j = 0; j < W2; j++)
        {
            cin >> B[i][j];
        }
    }

    bool flag = false;

    for (int bit_h = 0; bit_h < (1 << H1); bit_h++)
    {
        for (int bit_w = 0; bit_w < (1 << W1); bit_w++)
        {
            vector<int> h_up, w_up;
            for (int k = 0; k < H1; k++)
            {
                if(bit_h & (1 << k)) h_up.push_back(k);    
            }
            
            for (int k = 0; k < W1; k++)
            {
                if(bit_w & (1 << k)) w_up.push_back(k);    
            }

            if(h_up.size() != H2 || w_up.size() != W2) continue;

            bool iterflag = true;
            for (int i = 0; i < H2; i++)
            {
                for (int j = 0; j < W2; j++)
                {
                    if(B[i][j] != A[h_up[i]][w_up[j]]) iterflag = false;
                }
                
            }

            if(iterflag) flag = true;

        }
        
    }
    
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}