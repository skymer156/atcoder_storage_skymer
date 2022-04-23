#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    int x[4];

    for(int i=0;i < s.size();++i){
        x[i] = int(s[i] - '0');
    }
    
    bool same = false;
    for(int i=0;i < s.size() - 1;++i){
        if(x[i+1] == x[i]) same = true;
        else same = false;
        if(!same) break;
    }

    bool flag = true;
    for(int i=0;i < 3;++i){
            if(x[i] == 9){
                if(x[i+1] == 0) flag = true;
                else flag = false;
            }else{
                if(x[i+1] == x[i] + 1) flag = true;
                else flag = false;
            }
        if(!flag) break;
    }

    if(same){
        cout << "Weak" << endl;
    }else if(flag){
        cout << "Weak" << endl;
    }else{
        cout << "Strong" << endl;
    }

    return 0;
}