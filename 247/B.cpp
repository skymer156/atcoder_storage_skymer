#include <bits/stdc++.h>
using namespace std;


int main() {
  int N;
  cin >> N;	
  vector<string> s(N, "");
  vector<string> t(N, "");

  for (int i = 0; i < N; i++)
  {
    cin >> s[i] >> t[i];
  }
  
  // 姓と名、別々に考えて、少なくともどちらかが成り立てばYesになる。そうじゃないとNo
  // sとtのどちらかが重複しなければ良い。

  bool flag = false;
  for (int i = 0; i < N; i++) // 全部走査
  {
      bool s_check = false;
      
      bool t_check = false;
      
      for (int j = 0; j < N; j++) // s[i],
      {
        if(i != j ){
          if(s[i] == s[j] || s[i] == t[j]){
            s_check = true;
          }
        }
      }
      
      for (int j = 0; j < N; j++) // s[i],
      {
        if(i != j ){
          if(t[i] == s[j] || t[i] == t[j]){
            t_check = true;
          }
        }
      }

      if((s_check && t_check) == true){
        flag = true;
      }

  }
  
  if(flag == true){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
  
  return 0;
}
