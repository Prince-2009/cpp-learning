#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int);
};

void Base1::set_base1int(int a)
{
    base1int = a;
}

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int);
};

void Base2::set_base2int(int b)
{
    base2int = b;
}

// class Base3 {
//     protected:
//     int base3int;
//     public:
//     void set_base3int(int);
// };

// void Base3::set_base3int(int c){
//     base3int = c;
// }

class Derived : public Base1, public Base2   //, public Base3
{
public:
    void show()
    {
        cout << "The value of Base1 is: " << base1int << endl;
        cout << "The value of Base2 is: " << base2int << endl;
        // cout << "The value of Base3 is: " << base3int << endl;
        cout << "The sum of Base1, Base2 and Base3 is: " << base1int + base2int /* base3int */  << endl;
    }
};

/*

The inherited derived class will look like this:
Data membrs:
    base1int: ---> Pritected
    base2int: ---> Protected
Member functions:
    set_base1int ---> Public
    set_base2int ---> Public
    set_show() ---> Public

*/

int main()
{

    Derived Ayush;
    Ayush.set_base1int(34);
    Ayush.set_base2int(52);
    // Ayush.set_base3int(23);
    Ayush.show();

    return 0;
}