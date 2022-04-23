#include <iostream>

using namespace std;

int main(){
    long N,X,sum;

    sum =0;

    cin >> N >> X;

    for (int i = 1;i <= N ; i++){
        int A;cin >> A;
        if(i % 2 == 0){
            sum += A - 1;
        }else{
            sum += A;
        }
    }
    
    if( sum <= X ){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}