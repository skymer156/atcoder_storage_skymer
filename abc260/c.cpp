#include <iostream>
using namespace std;
long N, X, Y;
long BFS_blue(long);
long BFS_red(long);

long BFS_blue(long level){
    if(level == 1) return 1;
    return BFS_red(level - 1) + Y * BFS_blue(level - 1);
}

long BFS_red(long level){
    if(level == 1) return 0;
    return BFS_red(level - 1) + X * BFS_blue(level);
}


int main(){
    cin >> N >> X >> Y;
    cout << BFS_blue(N) << endl;

}