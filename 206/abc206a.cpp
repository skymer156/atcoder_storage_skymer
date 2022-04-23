#include <iostream>
#include <cmath>
#include <cfenv>
using namespace std;

int main()
{
    int N,Y;
    cin >> N;

    Y = floor(N*1.08);

    if(Y < 206){
        cout << "Yay!" << endl;
    }else if(Y == 206){
        cout << "so-so" << endl;
    }else{
        cout << ":(" << endl;
    }

    return 0;
}