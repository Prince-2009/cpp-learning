#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 45;
    virtual void Display()
    {
        cout << "Displaying 1 Base class variable var_base: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 78;
    void Display()
    {
        cout << "Displaying 2 Base class variable var_base: " << var_base << endl;
        cout << "Displaying 2 derived class variable var_derived: " << var_derived << endl;
    }
};

int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer =  &obj_derived;
    base_class_pointer->Display();

    return 0;
}