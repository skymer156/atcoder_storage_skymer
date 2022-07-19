#include <iostream>
using namespace std;


long N, X, Y;
long long calculation(long level, bool is_red){
    if(level == 1) return is_red ? 0 : 1;
    if(is_red){
        return calculation(level-1, true) + X *calculation(level, false);
    }else{
        return calculation(level - 1, true) + Y * calculation(level-1, false);
    }
}


int main(){
    cin >> N >> X >> Y;
    cout << calculation(N, true) << endl;
}