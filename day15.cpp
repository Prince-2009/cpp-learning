#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    friend complex complexSum(complex o1, complex o2);
    
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex complexSum(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));

    return o3;
}

int main()
{
    complex c1, c2;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(6, 7);
    c2.printNumber();

   complex sum = complexSum(c1, c2);
    sum.printNumber();

    return 0;
}

/* Properties of friend functions:
1. Not in the scope of class.
2. Since it is not in the scope of the class, it cannot be called from the object of the class. c1.sum() is invalid.
3.Can be invoked without the help of any object.
4. Usually contains the objects as areguments.
5. Can be declared inside public or private sections of the class.
6. It cannot be access the member directly by their name and needs object_name.member_name to access any member.
*/