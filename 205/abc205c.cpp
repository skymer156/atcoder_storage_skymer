#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    long A,B,C ;
    cin >> A >> B >> C;
    
    if(C % 2 == 0){

        if(abs(A) < abs(B)){
            cout << '<' << endl;
        }else if(abs(A) == abs(B)){
            cout << '=' << endl;
        }else{
            cout << '>' << endl;
        }

    }else{

        if(A > 0 && B > 0){

            if(A < B){
            cout << '<' << endl;
            }else if(A == B){
            cout << '=' << endl;
            }else{
            cout << '>' << endl;
            }

        }else if(A > 0 && B < 0){

            cout << '>' << endl;

        }else if(A < 0 && B > 0){

            cout << '<' << endl;

        }else{
            
            if(A < B){
            cout << '<' << endl;
            }else if(A == B){
            cout << '=' << endl;
            }else{
            cout << '>' << endl;
            }

        }

    }

    return 0;
}
