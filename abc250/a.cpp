#include <iostream>
using namespace std;

int main()
{
	int H, W, R, C;
	cin >> H >> W >> R >> C;

	int ans = 4;
	if (H > 1 && W > 1)
	{
		if (R == 1 || R == H)
			ans--;
		if (C == 1 || C == W)
			ans--;
	}
	else if (H == 1 && W > 1)
	{
		if (C == 1 || C == W)
		{
			ans = 1;
		}
		else
		{
			ans = 2;
		}
	}
	else if (W == 1 && H > 1)
	{
		if (R == 1 || R == H)
		{
			ans = 1;
		}
		else
		{
			ans = 2;
		}
	}
	else
	{
		ans = 0;
	}

	cout << ans << endl;
	return 0;
}
