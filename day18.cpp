#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // Creating a Constructor
    // Consturctor is a special memeberfunction with the same name as of the class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked whenever an object id created.

    complex(void); // Constructor declaration
    void printNumber()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

complex::complex(void) // -----> this is a default constructor as it takes no parameters
{
    a = 8;
    b = 3;
}

int main()
{
    complex c;
    c.printNumber();

    return 0;
}

/* Characteristics of Constructor
1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and have no return types.
4. It can have default agruments.
5. we cannot refer to  their address.
 */