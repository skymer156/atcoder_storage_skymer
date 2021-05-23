#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
 
int main(){
  int N;
  cin >> N;

  vector<long> T;
  map<int,string> mountain;

  for(int i=0;i< N;i++){
      string s;
      long num;
      cin >> s >> num;
      T.push_back(num);
      mountain[num] = s;
  }

  sort(T.begin(),T.end());
  cout << mountain[ T[N-2] ] << endl;
  
 return 0;
}