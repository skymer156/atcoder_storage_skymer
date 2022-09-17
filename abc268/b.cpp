#include <iostream>
#include <string>

using namespace std;

int main(){
    string S, T;
    cin >> S >> T;

    if(S.size() > T.size()){
        cout << "No" << endl;
        return 0;
    }

    bool judge = true;
    for(int i=0; i< S.size(); i++){
        if(S[i] != T[i]) judge = false;
    }

    if(judge){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}