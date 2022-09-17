#include <iostream>
#include <vector>

std::vector<bool> furui(long num)
{
    std::vector<bool> furui(num + 1, true);

    furui[0] = furui[1] = false;

    for (std::int32_t p = 2; p < num + 1; p++)
    {
        if (!furui[p])
            continue;
        for (std::int32_t q = p * 2; q <= num; q += p)
        {
            furui[q] = false;
        }
    }

    return furui;
}

int main()
{
    std::vector<bool> fur = furui(100005);

    std::vector<int> A(100005, 0);
    std::vector<long> B(100005, 0);

    for (std::int32_t i = 1; i < 100005; i++)
    {
        if (fur[i] && fur[(i + 1) / 2])
            A[i] = 1;
        B[i] = B[i - 1] + A[i];
    }

    std::int32_t Q;
    std::cin >> Q;

    for (std::int32_t i = 0; i < Q; i++)
    {
        std::int32_t L, R;
        std::cin >> L >> R;

        std::int32_t ans = B[R] - B[L - 1];
        std::cout << ans << std::endl;
    }
}