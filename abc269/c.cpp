#include <iostream>
#include <vector>

using namespace std;

void nishin(unsigned long long number, vector<int> &nishin_num){
    if(number == 1){
        nishin_num.push_back(1);
    }else{
        nishin_num.push_back(number % 2);
        nishin(number / 2, nishin_num);
    }
}

unsigned long long pow_two(int num){
    unsigned long long ret = 1;
    while (num > 0)
    {
        ret *= 2;
        num--;
    }
    return ret;
}

int main(){
    unsigned long long X;
    cin >> X;

    if(X == 0){
        cout << 0 <<endl;return 0;
    }

    vector<int> nishinsu;
    nishin(X, nishinsu);
    
    vector<int> order_store;

    for (int i = 0; i < nishinsu.size(); i++)
    {
        if(nishinsu[i] == 1){
            order_store.push_back(i+1);
        }
    }

    int order_size = order_store.size();
    for (long bit = 0; bit < (1 << order_size); bit++)
    {
        unsigned long long ans = 0;

        for(int i=0; i < order_size; i++){
            if(bit & (1 << i)){
                int pow_order = order_store[i];
                ans += pow_two(pow_order - 1);
            }
        }

        cout << ans << endl;
    }
}