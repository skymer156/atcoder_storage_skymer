#include <bits/stdc++.h>
using namespace std;

int main() {

  int N,D,H;
  cin >> N >> D >> H;

  cout << fixed << setprecision(16);

  double A = (double)H / (double)D;

  double min = 1.0e8;

  for(int i=0;i<N ;i++){
    int d,h;
    cin >> d >> h;
    double a = ( (double)H - (double)h ) / ( (double)D - (double)d );
    if(a < min){
        min = a;
    }
  }

  if(min > A){
      cout << 0.0 << endl;
  }else{
      double ans = (double)H - min * (double)D;
      cout << ans << endl;
  }

}
