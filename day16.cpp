#include <iostream>
using namespace std;

// Forward declaration
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex
{
    int a, b;
    // Individual declaration functions as friend

    // friend int calculator ::sumCompComplex(complex , complex );   |they both are also work
    // friend int calculator ::sumRealComplex(complex , complex );   |

    //Aliter: Declaring the entire claculator class as friend

    friend class calculator;  //   |this also works 

public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(8, 7);
    o2.setNumber(4, 1);
    calculator calc;

    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is: " << res << endl;

    int res2 = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is : " << res2 << endl;
    return 0;
}