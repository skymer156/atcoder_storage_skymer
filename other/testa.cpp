#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;
  int n = s.size();
  bool rev = false;
  deque<char> dq;
  for(int i = 0; i < n;i++){
    if(s[i] == 'R'){
      rev = !rev;
    }else{
        if(rev){
            dq.push_front(s[i]);
        }else{
            dq.push_back(s[i]);
        }
    }
  }
  
  if(rev){
      reverse(dq.begin(),dq.end());
  }

  string t;
  for(char c : dq){
      if(t.size() && t.back() == c){
          t.pop_back();
      }else{
          t.push_back(c);
      }
  }
  
  cout << t << endl;

}
