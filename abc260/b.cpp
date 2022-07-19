#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;

    vector<pair<int, int>> A(N);
    vector<pair<int, int>> B(N);
    vector<pair<int, int>> C(N);
    vector<bool> enter(N, false);
    vector<int> enter_num;

    for (int i = 0; i < A.size(); i++)
    {
        int temp = 0;
        cin >> temp;
        A[i] = {temp, -i};
        C[i] = {temp, -i};
    }

    for (int i = 0; i < B.size(); i++)
    {
        int temp = 0;
        cin >> temp;
        B[i] = {temp, -i};
        C[i].first += temp;
    }

    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());
    sort(C.rbegin(), C.rend());

    for (int i = 0; i < A.size(); i++)
    {
        A[i].second *= -1;
        B[i].second *= -1;
        C[i].second *= -1;
    }
    
    
    for (int i = 0; i < X; i++)
    {
        enter[A[i].second] = true;
        enter_num.push_back(A[i].second);
    }
    
    int Y_count =0;
    for (int i = 0; i < N; i++)
    {
        if(Y_count >= Y){
            break;
        }
        if(!enter[B[i].second]){
            enter[B[i].second] = true;
            enter_num.push_back(B[i].second);
            Y_count ++;
        }
    }

    int Z_count =0;
    for (int i = 0; i < N; i++)
    {
        if(Z_count >= Z){
            break;
        }
        if(!enter[C[i].second]){
            enter[C[i].second] = true;
            enter_num.push_back(C[i].second);
            Z_count ++;
        }
    }

    sort(enter_num.begin(), enter_num.end());

    for (auto &&i : enter_num)
    {
        cout << i + 1 << endl;
    }
    

}