#include <iostream>

using namespace std;

int main(){
    int N, X;
    cin >> N >> X;

    int devide = (X - 1) / N;
    char c;
    c = 'A' + devide;

    cout << c << endl;

}