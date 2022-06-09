#include <bits/stdc++.h>
using namespace std;


int main() {
  long A,B,K;
  cin >> A >> B >> K;

  int count = 0;
  for (int i = 0; i < 10000; i++)
  {
    if( A >= B ){
      cout << count << endl;
      break;
    }else{
      count++;
      A *= K;
    }

  }
  
  
    
  return 0;
}
