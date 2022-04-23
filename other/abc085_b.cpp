#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>
using namespace std;
 
int main(){
  int N;cin >> N;
  vector<int> v(N);

  for(int i=0;i<N;i++){
      int a;
      cin >> a;
      v[a] += 1;
  }

  int ans = 0;

  for(int i=0;i < N;i++){
      if (v[i] > 0)
      {
          ans ++;
      }   
  }

  cout << ans << endl;

  return 0;
}