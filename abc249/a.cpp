#include <bits/stdc++.h>
using namespace std;

int meter( int A, int B, int C, int X ){
	int meter;
  	int a, b;
  a = X / (A + C);
  if (a == 0){
  	if( X < A ){
    	meter = B * X;
    }else{
    	meter = A * B;
    }
  }else{
    b = X % (A + C);
	if( b < A ){
    	meter = a * B * A + B * b;
    }else{
    	meter = a * B * A + A * B;
    }
  }
  return meter;
}

int main() {
    int A, B, C, D, E, F, X;
    cin >> A >> B >> C >> D >> E >>F >> X;
    int meter_t, meter_a;
  meter_t = meter(A, B, C, X);
  meter_a = meter(D, E, F, X);
  if (meter_t > meter_a){
    cout << "Takahashi" << endl;
  }else if(meter_a > meter_t){
    cout << "Aoki" << endl;
  }else{
  	cout << "Draw" << endl;
  }
  
  return 0;
}
