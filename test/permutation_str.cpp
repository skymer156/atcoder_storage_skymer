#include <string>
#include <iostream>
#include <algorithm>

// quote : https://qiita.com/siser/items/a91022071b24952d27d9

void out_string(std::string &s){
    for(auto it = s.begin(); it != s.end(); it++){
        std::cout << it - s.begin() << ": " << *it << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::string input_str;
    std::cout << "input string, but it's length is under 8!!" << std::endl;
    std::cin >> input_str;

    for(auto it = input_str.begin(); it != input_str.end(); it++){
        std::cout << it - input_str.begin() << " : " << *it << " ";
    }
    std::cout << std::endl;

    // next permutations
    do
    {
        out_string(input_str);
    } while (std::next_permutation(input_str.begin(), input_str.end()));
    
    
}