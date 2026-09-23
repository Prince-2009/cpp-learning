#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number of this object is: " << a << endl;
    }
};

int main()
{
    Number x, y(12), z(57), z2;
    x.display();
    y.display();
    z.display();

    Number y1(z); // copy constructor invoked
    y1.display();

    z2 = z;
    z2.display();

    Number z3 = z;
    z3.display();

    return 0;
}