#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex::complex(int x, int y)   // ----> This is parameterizes constructor as it takes 2 parameters.
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    complex a(9, 3);
    a.printNumber();

    // Explicit call
    complex b = complex(5, 8);
    b.printNumber();

    return 0;
}