#include <iostream>
using namespace std;

class Employee
{
    int Id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the Id " << endl;
        cin >> Id;
        count++;
    }

    void getdata(void)
    {
        cout << "The id of this employee is " << Id << " and this is employee number " << count << endl;
    }
    static void getCount(void) {
        cout<<"The value of count is "<<endl;
    }
};

// Count is the static data member of class Employee

int Employee::count; // Defalut value id 0

int main()
{
    Employee Prince, Ayush, Tarun;
    Prince.setData();
    Prince.getdata();
    Employee::getCount;

    Ayush.setData();
    Ayush.getdata();
    Employee::getCount;

    Tarun.setData();
    Tarun.getdata();
    Employee::getCount;

    return 0;
}