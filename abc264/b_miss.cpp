#include <iostream>
#include <string>

int main()
{
    int R, C;

    std::cin >> R >> C;

    int r, c;
    if (C > R)
    {
        r = C;
        c = R;
        if (c > 15 - r)
        {
            int temp = r;
            r = c;
            c = 15 - temp;
            if (c % 2 == 1)
            {
                std::cout << "black" << std::endl;
            }
            else
            {
                std::cout << "white" << std::endl;
            }
        }
        else
        {
            if (c % 2 == 1)
            {
                std::cout << "black" << std::endl;
            }
            else
            {
                std::cout << "white" << std::endl;
            }
        }
    }
}