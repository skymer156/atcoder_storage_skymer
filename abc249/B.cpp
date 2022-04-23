#include <bits/stdc++.h>
using namespace std;

const int a = 97;
  const int z = 122;
  const int A = 65;
  const int Z = 90;

bool check_lower(char c){
	if((a <= c) && (c <= z)){
    	return true;
    }else{
    	return false;
    }
}

bool check_upper(char c){
	if((A <= c) && (c <= Z)){
    	return true;
    }else{
    	return false;
    }
}

int main() {	
    string S;
    cin >> S;
	bool checkUpper = false;
  bool checkLower = false;
  bool checkStr = true;
  vector<long> v(500, 0);
  
    for(long i=0; i < S.size(); i++){
    	checkUpper = check_upper(char(S[i]));
      if(checkUpper){
      	break;
      }
    }
  
  for(long i=0; i < S.size(); i++){
    	checkLower = check_lower(char(S[i]));
      if(checkLower){
      	break;
      }
    }
  for(long i=0; i < S.size(); i++){
    	v[S[i]] ++;
    }
  for(long i=0; i< v.size(); i++){
  		if( v[S[i]] > 1 ) checkStr = false;
  }
  
  if(checkStr && checkLower && checkUpper){
  	cout << "Yes" << endl;
  }else{
  	cout << "No" << endl;
  }
  
    return 0;
}
