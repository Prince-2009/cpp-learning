# include <iostream>
   using namespace std;

    int main() {
      int a,b,c;

      cout<<"Enter the value of a:";
      cin>>a;
      cout<<"Enter the value of b:";
      cin>>b;
      c = a + b;
      cout<<"The value of c is:"<<c;
      // this is experimenting with float data type
      float d = c + a;
      cout<<"\nThe value of d is:"<<d;

     float e = (d + 3)*a / 6;
      cout<<"\nThe value of e is:"<<e;
    return 0;
    }