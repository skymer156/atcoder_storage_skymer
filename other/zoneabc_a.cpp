#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;
  string temp = "ZONe";

  int cnt = 0;

  for(int i=0;i < 9;i++){
    if( temp == s.substr(i,4) ){
        cnt ++;
    }
  }

  cout << cnt << endl;

}
