#include <iostream>
using namespace std;

class Student
{
    int id;
    int income;

public:
    void setId(void)
    {
        income = 200;
        cout << "Enter the Id of student " << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of student is " << id << " and the salary is " << income << endl;
    }
};
int main()
{
    Student Prince, Ayush, Tarun;
    // Prince.setId();
    // Prince.getId();

    // Ayush.setId();
    // Ayush.getId();

    Student Team[3]; // Array of objects
    for (int i = 0; i < 3; i++)
    {
        Team[i].setId();
        Team[i].getId();
    }

    return 0;
}