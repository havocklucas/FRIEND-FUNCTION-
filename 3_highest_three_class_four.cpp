#include <iostream>
using namespace std;
#include <conio.h>

class two;
class three;

class one
{
private:
    int a;

public:
    void input()
    {
        cout << "Enter value of a :" << endl;
        cin >> a;
    }

    void display()
    {
        cout << "Value of a is :" << a << endl;
    }

    friend void max_num(one o, two t, three h, int d);
};

class two
{
private:
    int b;

public:
    void input()
    {
        cout << "Enter value of b  :" << endl;
        cin >> b;
    }

    void display()
    {
        cout << "Value of a is :" << b << endl;
    }

    friend void max_num(one o, two t, three h, int d);
};

class three
{
private:
    int c;

public:
    void input()
    {
        cout << "Enter value of c :" << endl;
        cin >> c;
    }

    void display()
    {
        cout << "Value of a is :" << c << endl;
    }

    friend void max_num(one o, two t, three h, int d);
};

void max_num(one o, two t, three h, int d)
{
    if (o.a > t.b && o.a > h.c && o.a > d)
    {
        cout << "a: " << o.a << "  greater value " << endl;
    }

    else if (t.b > o.a && t.b > h.c && t.b > d)
    {
        cout << "b " << t.b << "  greater value " << endl;
    }
    else if (h.c > o.a && h.c > t.b && h.c > d)
    {
        cout << "c:" << h.c << "  greater value " << endl;
    }
    else
    {
        cout << "d : " << d << "  greater value" << endl;
    }
}

int main()
{
    one o1;
    two t1;
    three h1;

    o1.input();
    t1.input();
    h1.input();

    int d;
    cout << "Enter value of d :" << endl;
    cin >> d;

    max_num(o1, t1, h1, d);
}
