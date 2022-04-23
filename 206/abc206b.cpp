#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    long N;
    cin >> N;
    long sum = 0;

    for(int i = 1; i < N ;i++){
        sum += i;
        if(sum >= N){
            cout << i << endl;
            break;
        }
    }
    return 0;
}
