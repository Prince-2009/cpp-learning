#include <iostream>
using namespace std;

class Y;

class X
{
    int Data;

public:
    void setValue(int value)
    {
        Data = value;
    }
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "Sum of Data X and Y is:" << o1.Data + o2.num << endl;
}

int main()
{
    X a;
    a.setValue(9);

    Y b;
    b.setValue(1);

    add(a, b);

    return 0;
}