#include <iostream>
#include <cmath>

using namespace std;
// Calculator

class Simple
{
protected:
    int a, b;

public:
    void input()
    {
        cout << "Enter your value of a: " << endl;
        cin >> a;
        cout << "Enter your value of b: " << endl;
        cin >> b;
    }

    void display()
    {
        cout << "The addition of a and b is: " << a + b << endl;
        cout << "The subtraction of a and b is: " << a - b << endl;
        cout << "The multiplication of a and b is: " << a * b << endl;
        cout << "The division of a and b is: " << (double)a / b << endl;
    }
};

class Scientific : virtual public Simple
{
protected:
    int c, d;

public:
    void input_scientific()
    {
        cout << "Enter your value of c: " << endl;
        cin >> c;
        cout << "Enter your value of d: " << endl;
        cin >> d;
    }
    void display_scientific()
    {
        cout << "The square root of c: " << sqrt(c) << endl;
        cout << "The square root of d: " << sqrt(d) << endl;
        cout << "The cube root of c: " << cbrt(c) << endl;
        cout << "The cube root of d: " << cbrt(d) << endl;
        cout << "The value of c raised to the power of d: " << pow(c, d) << endl;
        cout << "The value of d raised to the power of c: " << pow(d, c) << endl;
        cout << "The sine of " << a << " + " << b << " is: " << sin(a + b) << endl;
        cout << "The cosine of " << a << " + " << b << " is: " << cos(a + b) << endl;
        cout << "The tangent of " << a << " + " << b << " is: " << tan(a + b) << endl;
        cout << "The  value of sin(a) is: " << sin(a) << endl;
        cout << "The  value of cos(a) is: " << cos(a) << endl;
        cout << "The  value of tan(a) is: " << tan(a) << endl;
        cout << "The  value of sin(b) is: " << sin(b) << endl;
        cout << "The  value of cos(b) is: " << cos(b) << endl;
        cout << "The  value of tan(b) is: " << tan(b) << endl;
    }
};

class Hybrid : virtual public Simple, public Scientific
{
public:
    void display_hybrid()
    {
        cout << "The result in both simple and scientific operations are: " << endl;
        display();
        display_scientific();
    }
};

int main()
{
    Hybrid h;
    h.input();
    h.input_scientific();
    h.display_hybrid();
    return 0;
}