#include <iostream>
#include <string>

using namespace std;

bool judge(string s){
    int judgenum = 0;
    for (int i=0; i < s.size(); i++)
    {
        if(s[i] == '(') judgenum++;
        if(s[i] == ')') judgenum--;
        if(judgenum < 0) return false;
    }
    if (judgenum == 0) return true;
    return false; 
}

int main(){
    int N;
    cin >> N;

    for (int i = 0; i < (1 << N); i++)
    {
        string component = "";
        for (int j = N - 1; j >= 0; j--)
        {
            if((i & (1 << j)) == 0){
                component += '(';
            }else{
                component += ')';
            }
        }
        if(judge(component) == true) cout << component << endl;
    }
}
