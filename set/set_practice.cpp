#include <iostream>
#include <set>
#include <string>

using namespace std;

struct Person
{
    string m_name;
    int m_height;
};

void show_set(set<int> &st)
{
    int n = 0;
    for (auto &i : st)
    {
        cout << "set no. " << n << ", val :" << i << endl;
        n++;
    }
}

int main()
{
    set<int> st{5, 1, 9, 3};

    show_set(st);

    set<int> st2(st);

    set<Person> st_p;
    // st_p.insert(Person("bob", 160));
    // st_p.insert(Person("tom", 170));
    // st_p.insert(Person("Jelly", 158));
    // st_p.insert(Person("Carrol", 163));

    for (auto it = st2.rbegin(); it != st2.rend(); it++)
    {
        cout << *it << endl;
    }
}