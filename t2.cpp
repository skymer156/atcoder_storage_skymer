#include <bits/stdc++.h>
using namespace std;

bool judge(string s){
 int num = s.size();
 bool judge = true;
 for(int ind=0;ind < num /2;ind++){
  if(s[ind] != s[num - 1 - ind]) judge = false;
  if(judge) break;
 }
 cout << judge << endl;
 return judge;
}

int main() {

  string s;
  cin >> s;
  int N = s.size();
  bool flag = judge(s);
  if(flag){
   cout << "Yes" << endl;
  }else{
   for(int i=0;i < N-1;i++){
   s = '0' + s;
   bool flag2 = judge(s);
   if(flag2){
     cout << s << endl;
     cout << "Yes" << endl;break;
    }else if(flag2 && i == N - 1){
     cout << "No" << endl;
   }
   }//for 
  }//else
 return 0;
}
