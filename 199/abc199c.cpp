#include <iostream>
using namespace std;

int main() {
 
  long N,Q;
  string S;
  cin >> N >> S >> Q;
  
  bool tf = false;
  for(long i=0;i < Q;i++){
      int a,b,t;
      cin >> t >> a >> b;
      if(t == 2){
        tf = !tf;
      }else{
        if(tf){
            if(a <= N){
                a += N;
            }else{
                a -= N;
            }

            if(b <= N){
                b += N;
            }else{
                b -= N;
            }

            char c1 = S[a];
            char c2 = S[b];
            S[a] = c2;
            S[b] = c1;
        }else{
            char c1 = S[a];
            char c2 = S[b];
            S[a] = c2;
            S[b] = c1;
        }
      }
  }
  
  if(tf) S = S.substr(N,N) + S.substr(0,N);
  cout << S << endl;
 
}