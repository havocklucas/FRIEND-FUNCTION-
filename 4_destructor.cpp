#include <iostream>
using namespace std;

#include <conio.h>

class Sample
{
private:
    static int count;

public:
    Sample()
    {
        count++;
        cout << "Objesct " << count << "  created" << endl;
    }

    ~Sample()
    {
        cout << "Object   " << count << "  Created " << endl;
        count--;
    }
};
 
int Sample::count;

int main()
{
    Sample A;
    {
        Sample B;
    }

    return 0;
}