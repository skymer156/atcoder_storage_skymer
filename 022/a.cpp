#include <iostream>

using namespace std;

bool check(long S, long T, long w){
    if(S <= w && w <= T){
        return true;
    }else{
        return false;
    }
}

int main(){
    int N;
    cin >> N;

    long S, T, W;
    cin >> S >> T >> W;

    int cnt = 0;

    if(check(S, T, W)){
        cnt++;
    }

    long temp = W;
    for (int i = 2; i <= N; i++)
    {
        long A;
        cin >> A;
        temp = temp + A;
        if(check(S, T, temp)){
            cnt++;
        }
    }
    
    cout << cnt << endl;

}