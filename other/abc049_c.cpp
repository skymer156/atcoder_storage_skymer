#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string T[4] = {"dream","erase","eraser","dreamer"};

int main(){
  
  string s;
  cin >> s;
  reverse(s.begin(),s.end());
  for (int i=0;i<4;i++){
      reverse(T[i].begin(),T[i].end());
  }

  bool ans = true;
  for(unsigned int i=0;i < s.size();){
      bool flag = false;
      for(int j=0;j< 4 ;j++){
          string ss = T[j];
          if( s.substr(i,ss.size()) == ss ){
              i += ss.size();
              flag = true;
          }
      }
      if(!flag){
          ans = false;
          break;
      }
  }

  if(ans){
      cout << "YES" << endl;
  }else{
      cout << "NO" << endl;
  }

  return 0;
}