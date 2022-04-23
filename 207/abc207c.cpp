#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long> L;
    vector<long> R;
    vector<int> T;

    long l,r;
    int t;

    for (int i=0;i<N;i++){
        cin >> t >> l >> r;
        T.push_back(t);
        R.push_back(r);
        L.push_back(l);
    }
    
    long cnt =0;

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(L[i] == L[j] ){

                cnt ++;

            }else if(L[i] > L[j]){

                long min,max;
                min = L[i];
                max = R[j];
                if(min == max){
                    if( ( T[i]==1&&T[j]==1 ) || (T[i]==2&&T[j]==3) || (T[i]==2&&T[j]==1) || (T[i]==1&&T[j]==3) ) cnt ++;
                }else if(min < max){
                    cnt ++;
                }else{}

            }else{
                long min,max;
                min = L[j];
                max = R[i];
                if(min == max){
                    if( ( T[i]==1&&T[j]==1 ) || (T[j]==2&&T[i]==3) || (T[j]==2&&T[i]==1) || (T[j]==1&&T[i]==3) ) cnt ++;
                }else if(min < max){
                    cnt ++;
                }else{}

            }
        }
    }
    cout << cnt << endl;

    return 0;
}
