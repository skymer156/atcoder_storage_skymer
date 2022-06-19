#include <iostream>
#include <string>

using namespace std;

int main()
{
    long N;
    string T;
    cin >> N >> T;

    long direction = 0;
    long x = 0;
    long y = 0;

    for (long i = 0; i < N; i++)
    {
        char ch = T[i];
        if(ch == 'S'){
            if(direction % 4 == 0){
                x++;
            }else if(direction % 4 == 1){
                y--;
            }else if(direction % 4 == 2){
                x--;
            }else{
                y++;
            }
        }else{
            direction++;
        }
    }
    
    cout << x << " " << y << endl;
    
    return 0;
}