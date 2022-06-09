#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N][N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            A[i][j] = 0;
        }
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j <= i; j++){
            if( (j == i) || (j == 0) ){
                A[i][j] = 1;
            }else{
                A[i][j] = A[i-1][j-1] + A[i-1][j];
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }
    

    return 0;
}