#include <iostream>

using namespace std;

int main(){
    long N;
    string s;
    cin >> N >> s;

    for(int i=1;i <= s.length();++i){
        if(s[i-1] == '1'){
            if(i % 2 == 0){
                cout << "Aoki" << endl;
            }else{
                cout << "Takahashi" << endl;
            }
            break;
        }
    }
    

    return 0;
}