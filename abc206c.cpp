#include <iostream>
#include <map>

using namespace std;

int main()
{
    long N;
    cin >> N;
    map<long,long> mp;
    for(int i=0;i < N;i++){
        long num;
        cin >> num;
        mp[num] += 1;
    }

    long all = 0;
    long cnt = 0;

    for(int i=0;i < N;i++){
        all += i;
    }

    for(auto v:mp){
        for(int i=1;i<v.second;i++){
            cnt += i;
        }
    }

    cout << all - cnt << endl;

    return 0;
}
