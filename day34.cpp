#include <iostream>
using namespace std;

// Initialization list in constructor

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(2 * j)
    
    // Test(int i, int j) : a(i), b(a + j)   // This one is new
    // Test(int i, int j) : b(j), a(i + b) // ---> RED FLAG This will create problems beacuse a will be initialized first
    // Test(int i, int j) : a(i)
    {
        // b = j;

        cout << "Constructor executed" << endl;

        cout << "The value of a is: " << a << endl
             << "The value of b is: " << b << endl;
    }
};

int main()
{
    Test t(5, 9);

    return 0;
}