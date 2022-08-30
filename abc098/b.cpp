#include <iostream>
#include <string>
#include <set>

using namespace std;

// setを返すのではなく、カウントをintで返しても良い。
set<char> product(set<char> &setA, set<char> &setB){
    set<char> product;
    for (auto &&v : setA)
    {
        if(setB.find(v) != setB.end()){
            product.insert(v);
        }
    }
    return product;
}

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    int max_val = 0;

    for (int i = 1; i < N; i++)
    {
        string left = S.substr(0, i);
        string right = S.substr(i,N-i);

        set<char> st_left;
        set<char> st_right;

        for (auto &&c : left)
        {
            st_left.insert(c);
        }

        for (auto &&c : right)
        {
            st_right.insert(c);
        }

        set<char> prdct = product(st_left, st_right);

        if(prdct.size() > max_val){
            max_val = prdct.size();
        }

    }

    cout << max_val;
    
}