#include <iostream>
using namespace std;

int main(){
  int N , L;
  cin >> N >> L;
  string s[N+10];
  
  for(int i=0; i < N; i++){
   cin >> s[i];
  }
  
  for (int i = 0; i < N; i++)
  {
   cout << s[i] << endl;
  }
 return 0; 
}