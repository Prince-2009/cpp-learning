#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;

public:
    Simple(int a, int b = 7)
    {
        data1 = a;
        data2 = b;
    }

    void printData();
};

void Simple::printData()
{
    cout << "The value of data1 and data2 is : " << data1 << " and " << data2 << endl;
}

int main()
{
    Simple s(4);
    s.printData();

    return 0;
}