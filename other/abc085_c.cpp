#include <iostream>
#include <vector>
using namespace std;
 
int main(){
  long N,Y;
  cin >> N >> Y;

  int x,y,z;

  for (int i = 0;i <= N; i++){
      for (int j = 0; j <= N - i; j++)
      {
          int k = N - i - j;
          long money = 10000*i + 5000*j + 1000*k;
          if(money == Y){
              x = i;y = j;z = k;
              cout << x << " " << y << " " << z << endl;
              return 0;
          }
      }
  }

  cout << "-1 -1 -1" << endl;

  return 0;
}