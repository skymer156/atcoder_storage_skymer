#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<string> s;
    
    for(int i = 0;i < 4;i++){
        string str;
        cin >> str;
        s.push_back(str);
    }
    
    int flag[4] = {0,0,0,0};

    for (int i = 0; i < 4; i++)
    {
        if(s[i] == "H"){
            flag[0]++;
        }else if(s[i] == "2B"){
            flag[1]++;
        }else if(s[i] == "3B"){
            flag[2]++;
        }else{
            flag[3]++;
        }
    }
    
    for(int i = 0; i < 4; i++){
        if(flag[i] != 1){
    		cout << "No" << endl;
          	return 0;
        }
    }

  	cout << "Yes" << endl;

    return 0;
}