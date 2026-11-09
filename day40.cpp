#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void Display()
    {
        cout << "Displaying Base class variable var_base: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void Display()
    {
        cout << "Displaying Base class variable var_base: " << var_base << endl;
        cout << "Displaying Derived class variable var_derived: " << var_derived << endl;
    }
};

int main()
{
    BaseClass *Base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    Base_class_pointer = &obj_derived; // Pointing Base calss pointer to Derived class
    Base_class_pointer->var_base = 56;
    Base_class_pointer->Display(); // It will call Base class function Display()

    DerivedClass *Derived_class_pointer;
    Derived_class_pointer = &obj_derived;
    Derived_class_pointer->var_derived = 45;
    Derived_class_pointer->var_base = 69;
    Derived_class_pointer->Display(); // It will call Derived class function Display()
    return 0;
}