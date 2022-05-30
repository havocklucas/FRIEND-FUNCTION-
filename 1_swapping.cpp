#include <iostream>
using namespace std;

#include <conio.h>

class swapping
{
private:
    int a, b;

public:
    swapping(int x, int y)
    {
        a = x;
        b = y;
    }

    friend void swap(swapping s);
};

void swap(swapping s)
{
    int c;
    cout << "Before swapping a and b " << s.a << s.b << endl;

    c = s.a;
    s.a = s.b;
    s.b = c;
    cout << "after swapping a and b " << s.a << s.b << endl;
}

int main()
{
    swapping S(23, 32);

    swap(S);
    return 0;
}