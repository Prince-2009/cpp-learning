#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

// class Base3
// {
// public:
//     void greet()
//     {
//         cout << "Hello!" << endl;
//     }
// };

class Derived : public Base1, Base2
{
    int a;

public:
    void greet()
    {
        Base1::greet();
    }
};

int main()
{
    Base1 b1;
    b1.greet();

    Base2 b2;
    b2.greet();

    Derived d;
    d.greet();
    
    return 0;
}