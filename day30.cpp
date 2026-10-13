#include <iostream>
#include<cmath>

using namespace std;

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
        cout << "The division of a and b is: " <<(double) a / b << endl;
    }
};

int main()
{
    Simple s;
    s.input();
    s.display();

    return 0;
}