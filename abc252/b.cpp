#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> A(N, 0);
    vector<int> B(K, 0);
    vector<int> C(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < K; i++)
    {
        cin >> B[i];
    }

    for(int i=0; i< N; i++)C[i] = A[i];

    // 最大のおいしさAを見つける(sort)
    sort(C.begin(), C.end());
    
    // 最大値
    int maxA = C[N-1];
    
    vector<int> maxindex;
    for(int i=0; i< N;i++){
        if(A[i] == maxA) maxindex.push_back(i+1);
    }

    bool flag = false;
    for (auto &&i : maxindex)
    {
        for (auto &&j : B)
        {
            if(i == j){
                flag = true;
                break;
            }
        }
        
    }

    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    

    return 0;
}