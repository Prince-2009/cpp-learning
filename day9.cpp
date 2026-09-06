# include <iostream>
 using namespace std;

//  Function prototype
// type function-name(argument)

int sum(int a, int b, int c, int d, int e, int f,int g);  // ---> Acceptable
// int sum(int a, int , int , int , int , int ,int );  // ---> Not Acceptable
// int sum(int , int , int , int , int , int ,int );  // --->  Acceptable
void p();
void p(void);


 int main() {
   int num1,num2,num3,num4,num5,num6,num7;
   cout<<"Enter the value 1:"<<endl;
    cin>>num1;
    cout<<"Enter the value 2:"<<endl;
    cin>>num2;
    cout<<"Enter the value 3:"<<endl;
    cin>>num3;
    cout<<"Enter the value 4:"<<endl;
    cin>>num4;
    cout<<"Enter the value 5:"<<endl;
    cin>>num5;
    cout<<"Enter the value 6:"<<endl;
    cin>>num6;
    cout<<"Enter the value 7:"<<endl;
    cin>>num7;

    // num1 and num2 and all num's are actual parameters
    cout<<"The sum is:"<<sum(num1,num2,num3,num4,num5,num6,num7)<<endl;

    p();

    return 0;
  }

   int sum(int a, int b, int c, int d, int e, int f,int g) {
    // Formal parameters a and b will be taking values from actual parameter's num1 and num2 all num's
      int total = a + b + c + d + e + f ;
       int result = total - g;
       return result;
  
  }

  void p() {
    cout<<"\nHey,what's up";

  }