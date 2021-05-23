#include <iostream>
#include <vector>
using namespace std;
 
int main(){
  long N;cin >> N;
  vector<long long> B(200,0);
  for (int i=0;i < N;i++){
    long a;
    cin >> a;
    B[a % 200]++;  
  }
 
long count = 0;
 
  for(int i = 0;i < 200;i++){
      count += (B[i])*(B[i] - 1)/2;
  }
 
  cout << count << endl;
 return 0;
}