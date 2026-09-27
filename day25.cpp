#include <iostream>
using namespace std;

// Base Class

class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 1000000.9;
    }
    Employee() {}
};

// Derived Class syntx
/*
class {{derived-class-name}} : {{visibility-mode}} : {{base-class-name}}
{
    class members/methods/etc...
}
    Note:
    1.Default visibility mode is private.
    2.Public visibility Mode : Public members of the base class become Public member of the derived class.
    3.Private visibilty Mode : Private members of the base clsas become Public member of the derived class.
    4.Private member can never inherited.
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 8;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee Prince(1), Aayush(2);
    cout << Prince.salary << endl;
    cout << Aayush.salary << endl;
    Programmer codex(10);
    cout << codex.languageCode << endl;
    cout << codex.id << endl;
    codex.getData();

    return 0;
}