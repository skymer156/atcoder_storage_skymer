#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> st;

    for(int i=0; i < 5;i++){
        int d;
        cin >> d;
        if(st.find(d) == st.end()) st.insert(d);
    }

    
    int ans = st.size();

    cout << ans << endl;
}