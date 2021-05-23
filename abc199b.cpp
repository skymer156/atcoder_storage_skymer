#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A;
  vector<int> B;

  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    A.push_back(a);
  }
  
    for (int i = 0; i < N; i++)
  {
    int b;
    cin >> b;
    B.push_back(b);
  }

  int count = 0;

  for (int i = 1; i <= 1000; i++)
  {
    bool flag = true;
    for (int j = 0; j < N; j++)
    {
        if( i < A[j] || B[j] < i ){
            flag = false;
            break;
            }
    }
    if(flag) count+=1;
  }
    cout << count << endl;
}
