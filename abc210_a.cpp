#include <iostream>

using namespace std;

int main(){
    long N,A,X,Y;
    cin >> N >> A >> X >> Y;

    if(N > A){
        cout << X * A + Y * ( N - A) << endl;
    }else{
        cout << X * N << endl;
    }

    return 0;
}