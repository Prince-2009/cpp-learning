# include <iostream>
using namespace std;

  int main() {
     // What is Pointer -----> Data type which holds the address of other data type 

     int a = 6;
     int* b = &a;

     // & ---> (Address of) Operator:
      cout<<"The address of a is:"<<&a<<endl;
      cout<<"The address of b is:"<<b<<endl;

     // * ---> (valur at) Dereference operator:
     cout<<"The value at address b is:"<<*b<<endl;

     // Pointer to Ponter: 
    int** c = &b;
    cout<<"The address of b is:"<<&b<<endl;
    cout<<"The address of b is:"<<c<<endl;
    cout<<"The value at address c is:"<<*c<<endl;
    cout<<"The value at address value_at(value_at(C)) is:"<<**c<<endl;

    return 0;
  }