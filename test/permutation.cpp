#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    std::vector<int> vec;
    
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    do
    {
        for (auto it = vec.begin(); it != vec.end(); ++it)
        {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
    } while (std::next_permutation(vec.begin(), vec.end()));
    return 0;
}