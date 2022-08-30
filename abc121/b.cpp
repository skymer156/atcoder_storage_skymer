#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<pair<long, long>> drink;

    for (int i = 0; i < N; i++)
    {
        long A, B;
        cin >> A >> B;
        drink.push_back(make_pair(A, B));
    }

    sort(drink.begin(), drink.end());
    
    long long drink_num = 0;
    long long money = 0;
    int index = 0;
    while (drink_num < M)
    {
        drink_num += drink[index].second;
        if(drink_num >= M){
            money += drink[index].first * (M - drink_num + drink[index].second);
        }else{
            money += drink[index].first * drink[index].second;
        }

        index++;
    }
    
    cout << money << endl;

}