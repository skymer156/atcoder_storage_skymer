#include <bits/stdc++.h>
using namespace std;

int main()
{
  long N, W;
  cin >> N >> W;

  vector<long> A(N, 0);

  map<long, int> good_integer;

  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  for (int i = 0; i < N; i++)
  {
    if (A[i] <= W)
      good_integer[A[i]] = 1;
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      if (i != j)
      {
        long sum = A[i] + A[j];
        if (sum <= W)
          good_integer[sum] = 1;
      }
    }
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      for (int k = j + 1; k < N; k++)
      {
        if ((i != j) && (i != k) && (j != k))
        {
          long sum = A[i] + A[j] + A[k];
          if (sum <= W)
            good_integer[sum] = 1;
        }
      }
    }
  }

  cout << good_integer.size() << endl;

  return 0;
}
