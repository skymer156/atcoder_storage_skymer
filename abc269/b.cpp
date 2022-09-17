#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> s(10, "");
    for (auto &&_s : s)
    {
        cin >> _s;
    }

    pair<int, int> l_up;

    bool first = false;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(s[i][j] == '#'){
                l_up = {i, j};
                first = true;
                break;
            }
        }
        if(first) break;
    }

    int left_down_row = 0;
    for (int i = 9; i >= 0; i--)
    {
        if(s[i][l_up.second] == '#'){
            left_down_row = i;
            break;
        }
    }

    int right_down_col = 0;
    for(int i=9; i>= 0; i--){
        if(s[left_down_row][i] == '#'){
            right_down_col = i;
            break;
        }
    }
    


    cout << l_up.first + 1 << " " << left_down_row + 1 << endl;
    cout << l_up.second + 1 << " " << right_down_col + 1 << endl;

}