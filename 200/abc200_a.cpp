#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int a = N % 100;

  if(a == 0){
    cout << N / 100 << endl;    
  }else{
    cout << N / 100 + 1 << endl;  
  }

}
