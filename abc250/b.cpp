#include <iostream>
using namespace std;

bool is_odd(int value)
{
	if (value % 2 == 1)
		return true;
	return false;
}

void write(bool i_odd, bool j_odd)
{
	if (i_odd == j_odd)
	{
		cout << '.';
	}
	else
	{
		cout << '#';
	}
}

int main()
{
	int N, A, B;
	cin >> N >> A >> B;

	int i_max = N * A;
	int j_max = N * B;

	bool i_odd = true;
	bool j_odd = true;

	for (int i = 0; i < i_max; i++)
	{
		for (int j = 0; j < j_max; j++)
		{
			i_odd = is_odd(i / A);
			j_odd = is_odd(j / B);
			
			write(i_odd, j_odd);

		}
		cout << endl;
	}

	return 0;
}
