#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void);
    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

complex::complex(void)
{
    a = 0;
    b = 0;
    cout << "Hey Everyone" << endl;
}

int main()
{
    complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}