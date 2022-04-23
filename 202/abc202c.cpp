#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  
  long N;cin>>N;
  vector<long> A(100001,0);
  vector<long> B(100001,0);
  vector<long> C(100001,0);
  vector<long> D(100001,0);

  for (int i=0;i < N;i++){
    long a;cin >> a;
    A[a] += 1;
  }
  for (int i=0;i < N;i++){
    long b;cin >> b;
    B[i] = b;
  }
  for (int i=0;i < N;i++){
    long c;cin >> c;
    C[i] = c;
  }
  for (int i=0;i < N;i++){
    long d = B[C[i]-1];
    D[d] += 1;
  }

  long ans = 0;

  for (int i=0;i < N;i++){
    ans += A[i] * D[i];
  }

  cout << ans << endl;

  return 0;
}