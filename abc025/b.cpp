#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    vector<string> s;
    vector<int> d;

    for (int i = 0; i < N; i++)
    {
        string S;
        int D;
        cin >> S >> D;
        s.push_back(S);
        d.push_back(D);
    }
    
    int location = 0;

    for (int i = 0; i < N; i++)
    {
        int move = clamp(d[i], A, B);

        // if(D[i] < A){
        //     move = A;
        // }else if(A <= D[i] && D[i] <= B){
        //     move = D[i];
        // }else{
        //     move = B;
        // }

        if(s[i] == "East"){
            location += move;
        }else{
            location -= move;
        }
    }

    if (location > 0)
    {
        cout << "East " << location << endl;
    }else if (location < 0)
    {
        cout << "West " << abs(location) << endl;
    }else{
        cout << 0 << endl;
    }
    
    
    

}