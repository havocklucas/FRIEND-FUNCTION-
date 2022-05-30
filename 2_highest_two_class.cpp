#include <iostream>
using namespace std;

#include <conio.h>

class Two;

class One
{
private:
    int a, b;

public:
    One(int x)
    {
        a = x;
    }
    friend void Highest(One o, Two t);
};

class Two
{
private:
    int a, b;

public:
    Two(int x)
    {
        a = x;
    }
    friend void Highest(One o, Two t);
};

void Highest(One o, Two t)
{
    if (o.a > t.a)
    {
        cout << "Highest number is " << o.a << endl;
    }
    else
    {
        cout << "Highest number is " << t.a << endl;
    }
}

int main()
{
    One O(21);
    Two T(32);

    Highest(O, T);

    return 0;
}
