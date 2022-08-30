#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    vector<int> card(5,0);

for (int i = 0; i < 5; i++)
{
    cin >> card[i];
}

    map<int, int> ma;

    for (auto i : card)
    {
        if(ma.find(i) == ma.end()){
            ma[i] = 1;
        }else{
            ma[i]++;
        }
    }

    if(ma.size() == 2){
        if((ma[card[0]] == 2) || (ma[card[0]] == 3)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        cout << "No" << endl;
    }

    return 0;
}