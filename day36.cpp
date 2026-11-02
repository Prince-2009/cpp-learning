#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    void getData(void)
    {
        cout << "The real part is: " << real << endl;
        cout << "The imaginary part is: " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;
    // (*ptr).setData(4, 67);  it is exactly same as below
    ptr->setData(4, 67); 

    // (*ptr).getData(); is as good as
    ptr->getData();

// Array of Object
    complex *ptr1 = new complex[4];
    ptr1->setData(1,7);
    ptr1->getData();

    return 0;
}
