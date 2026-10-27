#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 5;
    int *prt = &a;
    *prt = 34434;
    cout << " The value of a is: " << *(prt) << endl;
    // cout << " The address of a is: " << &a << endl;

    // New keyword
    int *p = new int(30);
    cout << " The value at address p is: " << *(p) << endl;

    float *q = new float(35.2013);
    cout << " The value at address q is: " << *(q) << endl;

    // New Keyword
    int *arr = new int[4];
    arr[0] = 10;
    /* arr[1] = 20; ---> write it down aslo */ *(arr + 1) = 20;
    arr[2] = 40;
    arr[3] = 30;
    // delete[] arr;
    cout << " The value of arr[0] is: " << arr[0] << endl;
    cout << " The value of arr[1] is: " << arr[1] << endl;
    cout << " The value of arr[2] is: " << arr[2] << endl;
    cout << " The value of arr[3] is: " << arr[3] << endl;

    // Delete operator

    return 0;
}