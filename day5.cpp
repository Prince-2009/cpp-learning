# include <iostream>
# include <iomanip>
    using namespace std;
     
    int main() {
        // int a = 45;
        // cout<<"The value of a was: "<<a<<endl;

        // a = 5;
        // cout<<"The value of a is :"<<a<<endl;

        // Constant on C++
        // const int a = 23;
        // cout<<"The valur of a was: "<<a<<endl;

        // a = 44;
        // cout<<"The value of a is: "<<a<<endl;
        

        //Manipulators in C++
        int a = 4,b = 21,c = 5123;
        cout<<"The value of a without stew is:"<<a<<endl;
        cout<<"The value of b without stew is:"<<b<<endl;
        cout<<"The value of c without stew is:"<<c<<endl;

        cout<<"The value of a was:"<<setw(4)<<a<<endl;
        cout<<"The value of b was:"<<setw(4)<<b<<endl;
        cout<<"The value of c was:"<<setw(4)<<c<<endl;


        // Operator Precedence
        //  int a = 4,b = 6;
         //int c = (a*2)+b;
         
        //  int c = ((((a*2)+b)-23)+10);  //Learn yt 8,on chrome refrence table--
        //  cout<<c; 


        return 0;
    }