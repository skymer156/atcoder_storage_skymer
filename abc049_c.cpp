#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  
  string s;
  cin >> s;
  reverse(s.begin(),s.end());
  vector<string> T = {"dream","erase","eraser","dreamer"};
  for (int i=0;i<4;i++){
      reverse(T[i].begin(),T[i].end());
  }

  bool ans = true;
  for(int i=0;i < s.size();){
      bool flag = false;
      for(int j=0;j< 4 ;j++){
          if( s.substr(i,T[j].size()) == T[j] ){
              i += T[j].size();
              flag = true;
          }
      }
      if(!flag){
          ans = false;
          break;
      }
  }

  if(ans){
      cout << "Yes" << endl;
  }else{
      cout << "No" << endl;
  }

  return 0;
}