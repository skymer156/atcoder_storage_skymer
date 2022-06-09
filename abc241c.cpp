#include <iostream>
#include <vector>
#include <string>
#include <map>

#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

/*
6*6のブロック単位で区切れば、対角線が明確になるか。
1ブロックに対して、6+6+2通りのチェックを行う。
約O(N^2) : 1000 * 1000 = 10^6
10^6 * 12 = 1.2 * 10^7
低コストでブロックの処理を行う必要がある。

チェック : 文字列に対して、#が三つ入っているかどうかの確認をする。

*/

int main()
{
    int N, M;
    cin >> N >> M;

    vector<long> A(N, 0);
    vector<long> B(M, 0);

    rep(i, N) cin >> A[i];
    rep(i, M) cin >> B[i];

    map<int, int> count;

    rep(i, N) count[A[i]]++;

    for (int i = 0; i < M; i++)
    {
        if (count[B[i]] == 0)
        {
            cout << "No" << endl;
            return 0;
        }
        else
        {
            count[B[i]]--;
        }
    }

    cout << "Yes" << endl;
    return 0;
}