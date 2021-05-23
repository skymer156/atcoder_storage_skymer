#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>
using namespace std;
 
int main(){
  string s;
  cin >> s;
  vector<int> A;
  vector<int> B;
  vector<int> C;

  for(int i=0;i < s.length();i++){
      if(s[i] == 'o'){
          A.push_back(i);
          C.push_back(i);
      }else if(s[i] == '?'){
          B.push_back(i);
          C.push_back(i);
      }else{
      }
  }

  if(A.size() > 4){
      cout << 0 << endl;
      return 0;
  }

  if(A.size() == 4){
      cout << 24 << endl;
      return 0;
  }else if(A.size() == 0 && B.size() == 0){
      cout << 0 << endl;
      return 0;
  }else if(A.size() == 0){
      cout << B.size()*B.size()*B.size()*B.size() << endl;
      return 0;
  }else{
      set<string> st;
    do{
        vector<int> D = A;
        for(int i = 0; i < 4 - A.size();i++){
            D.push_back(C[i]);
        }
        sort(D.begin(),D.end());
        do
        {
            string S = "";
            for( auto x:D ) S.push_back(x);
            st.insert(S);
        } while (next_permutation(D.begin(),D.end()));
    }  while( next_permutation(C.begin(),C.end()) );

    cout << st.size() << endl;

  }
  
 return 0;
}