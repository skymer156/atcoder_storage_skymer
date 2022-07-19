#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> A(K,0);
    vector<int> L(N,0);

    for (int i = 0; i < K; i++)
    {
        cin >> A[i];
    }
    
    for (int i = 0; i < Q; i++)
    {
        cin >> L[i];
    }
    
    for (int i = 0; i < Q; i++)
    {
        int index_from_left = L[i] - 1;

        int L_mass = A[index_from_left];
        if(L_mass != N){
            if(L[i] == K){
                A[index_from_left] ++;
            }else{
                int diff = A[L[i]] - A[index_from_left];
                if(diff >= 2) A[index_from_left] ++;
            }
        }
    }
    
    for (int i = 0; i < K; i++)
    {
        cout << A[i] << ' ';
    }
    

    return 0;
}