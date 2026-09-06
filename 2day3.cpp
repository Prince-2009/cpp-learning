# include <iostream>
   using namespace std;
    int main() {



        cout<<"Operating in C++:"<<endl;
        cout<<"Following are the types of operators in C++:"<<endl;
        // Arithmetic Operators
            int a = 12, b = 6;
        cout<<"The value of a + b is "<< a + b<<endl;
        cout<<"The value of a - b is "<< a - b<<endl;
        cout<<"The value of a / b is "<< a / b<<endl;
        cout<<"The value of a * b is "<< a * b<<endl;
        cout<<"The value of a % b is "<< a % b<<endl;
        cout<<"The value of a++ is "<< a++<<endl;
        cout<<"The value of a-- is "<< a--<<endl;
        cout<<"The value of b++ is "<< b++<<endl;
        cout<<"The value of b-- is "<< b--<<endl;
        cout<<"The value of ++a is "<< ++a<<endl;
        cout<<"The value of --a is "<< --a<<endl;
        cout<<"The value of ++b is "<< ++b<<endl;
        cout<<"The value of --b is "<< --b<<endl;
         cout<<endl;

        // Assignment Operators --> used to assign values to variables
        //  int a = 7, b = 9;
        // char d = 'p';
        
        // Comparison Operators 
        cout<<"Following are the comparison Operators in C++:"<<endl;
        cout<<"The values of a == b is "<< (a == b)<<endl;
        cout<<"The values of a != b is "<< (a != b)<<endl;
        cout<<"The values of a < b is "<< (a < b)<<endl;
        cout<<"The values of a > b is "<< (a > b)<<endl;
        cout<<"The values of a <= b is "<< (a <= b)<<endl;
        cout<<"The values of a >= b is "<< (a >= b)<<endl;
        cout<<endl;

        // Logical Operators 
        cout<<"Following are the logical Operators in C++:"<<endl;
        cout<<"The values of this logical and operator ((a==b) && (a>b)) is "<< ((a==b) && (a>b))<<endl;
        cout<<"The values of this logical or operator ((a==b) || (a>b)) is "<< ((a==b) || (a>b))<<endl;
        cout<<"The value of this logical not operator (!(a==b)) is "<< (!(a==b))<<endl;

        return 0;
    }