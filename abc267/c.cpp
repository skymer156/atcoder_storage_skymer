#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

pair<int, int> sub(pair<int, int> &left, pair<int, int> &right){
    pair<int, int> sub = make_pair(left.first - right.first, left.second - right.second);
    return sub;
}

double pair_length(pair<int, int> &vec){
    long sq_len = vec.first * vec.first + vec.second * vec.second;
    return sqrt(sq_len);
}

long dot(pair<int, int> &vec_left, pair<int, int> &vec_right){
    long ans = vec_left.first * vec_right.first + vec_left.second * vec_right.second;
    return ans;
}

int main()
{
    vector<pair<int, int>> coordinates;

    for (int i = 0; i < 4; i++)
    {
        int x, y;
        cin >> x >> y;
        coordinates.push_back(make_pair(x,y));
    }

    vector<pair<int, int>> right_vec;
    vector<pair<int, int>> left_vec;

    for (int i = 0; i < 4; i++)
    {
        right_vec.push_back(sub(coordinates[(i+1)%4],coordinates[i]));
        left_vec.push_back(sub(coordinates[(i+3)%4],coordinates[i]));
    }
    
    vector<double> cos_vec;
    vector<double> angle_vec;

    for (int i = 0; i < 4; i++)
    {
        long cos_dot = dot(left_vec[i], right_vec[i]);
        double cos_abs = pair_length(left_vec[i]) * pair_length(right_vec[i]);
        double cos_val = cos_dot / cos_abs;
        cos_vec.push_back(cos_val);
        angle_vec.push_back(acos(cos_val));
    }

    double sum = 0;
    for (auto &&i : angle_vec)
    {
        sum += i;
    }
    
    double ans = sum / acos(-1) * 180;

    if( 359 < ans && ans < 361 ){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}