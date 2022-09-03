#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check_vec(vector<int> &a, vector<int> &b){
    bool flag = true;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] != b[i]) flag = false;
    }
    return flag;
}

int main()
{
    int N;
    cin >> N;

    vector<int> P, Q;

    for (int i = 0; i < N; i++)
    {
        int d;
        cin >> d;
        P.push_back(d);
    }

    for (int i = 0; i < N; i++)
    {
        int d;
        cin >> d;
        Q.push_back(d);
    }

    vector<int> num_array(N, 0);

    for (int i = 1; i <= N; i++)
    {
        num_array[i-1] = i;
    }
    

    int p_num = 0;
    int q_num = 0;
    int index = 0;

    do
    {
        if(check_vec(P, num_array)) p_num = index;
        if(check_vec(Q, num_array)) q_num = index;

        index ++;
    } while (next_permutation(num_array.begin(), num_array.end()));
    
    cout << abs(p_num - q_num);

}