#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[N+10] = {0};

    for(int i = 0;i < N;i++){
        int A = 0;
        cin >> A;
        a[A]++;
    }

    bool flag = true;

    for(int i=0;i<N;i++){
        if(a[i+1] != 1){
            flag = false;
        }
    }

    if(flag) cout << "Yes" << endl;
    else  cout << "No" << endl;

    return 0;
}