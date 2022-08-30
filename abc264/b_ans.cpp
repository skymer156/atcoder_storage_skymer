#include <iostream>
#include <cmath>

int main()
{
    int R, C;

    std::cin >> R >> C;

    int judge = std::max(std::abs(R-8),std::abs(C-8));

    if(judge % 2 == 0){
        std::cout << "white" << std::endl;
    }else{
        std::cout << "black" << std::endl;
    }
}