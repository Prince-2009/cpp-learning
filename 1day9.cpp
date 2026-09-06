# include <iostream>
 using namespace std;

 int sum(int a,int b) {
   int c = a + b;
   return c;
 }

 // This will not swap a and b
  // void swap(int a, int b) {     // temp  a b
  //   int temp = a;              //  5    5 6
  //    a = b;                   //   5    6 6
  //    b = temp;               //    5    6 5
  // }

  // Call by reference using Pointers
  void swapPointer(int *a,int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
  // Call by reference using C++ reference variables
  void swapReferencevar(int &a,int &b) {
    int temp = a;
    a = b;
    b = temp;
  }

  int main() {
    int x = 5,y = 6;

    // cout<<"The sum of 5 and 6 is:"<<sum(a,b)<<endl;

    cout<<"The value of x is:"<<x<<". and The value of y is:"<<y<<endl; 
    // swap(x,y); // This will not swap a and b
 
    // swapPointer(&x, &y); // This will not swap a and b using Pointer reference
    // cout<<"The value of x is:"<<x<<". and The value of y is:"<<y<<endl;
    
    swapReferencevar(x, y); // This will not swap a and b using Reference variable
    cout<<"The value of x is:"<<x<<". and The value of y is:"<<y<<endl;
    
    return 0;

  }