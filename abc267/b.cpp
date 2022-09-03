#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> pin(10);

    for (int i = 0; i < 10; i++)
    {
        if (s[i] == '0')
        {
            pin[i] = 0;
        }
        else
        {
            pin[i] = 1;
        }
    }
    vector<vector<int>> cols(7);

    cols[0].push_back(pin[6]);
    cols[1].push_back(pin[3]);
    cols[2].push_back(pin[1]);
    cols[2].push_back(pin[7]);
    cols[3].push_back(pin[0]);
    cols[3].push_back(pin[4]);
    cols[4].push_back(pin[2]);
    cols[4].push_back(pin[8]);
    cols[5].push_back(pin[5]);
    cols[6].push_back(pin[9]);

    if (pin[0] == 0)
    {

        for (int i = 1; i < cols.size() - 1; i++)
        {
            bool hit = true;
            for (auto &p : cols[i])
            {
                if (p == 1)
                {
                    hit = false;
                }
            }
            if (hit)
            {
                bool check_l = false;
                bool check_r = false;

                for (int j = 0; j < i; j++)
                {
                    for (auto &&p : cols[j])
                    {
                        if (p == 1)
                            check_l = true;
                        break;
                    }
                }

                for (int j = i + 1; j < cols.size(); j++)
                {
                    for (auto &&p : cols[j])
                    {
                        if (p == 1)
                            check_r = true;
                        break;
                    }
                }

                if (check_r && check_l)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else
                continue;
        }

        cout << "No" << endl;

    }
    else
    {
        cout << "No" << endl;
    }
}