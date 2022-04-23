#include <iostream>

using namespace std;

int main(){

    int test = 0;

    for(int i = 0; i < 512; i++){
        cout << test << endl;
        test = (test + 1) & 511;
    }

    return 0;
}