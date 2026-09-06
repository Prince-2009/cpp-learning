  // OOPs - Classes and Objects

    // C++ ---> initially called  -->  C with classes by stroustroup
    // class ---> extension of structure (in C)
    // structures had limitations
    // --- members are public
    // --- No methods
    //  classes ---> structures + more
    // classes ---> can have methods and properties
    // classes ---> can make few members as private & few as public
    // structure in C++ are typedefed
    // you can declare object along with the class declarion like this:
    /* class Employee {
        Class definition
        } Prince , Ayush , Sagar; */
//  Prince.Salary = 78;  makes no sense if salary is private
        
// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary
{
    private: // but there is no need to write 'private' bcz it's by default private
    string s;
    void chk_bin(void);

public:
    void read(void);
    void once_compliment(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary::once_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout << "Displaying your binary number ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin(); 
    b.display();
    b.once_compliment();
    b.display();

    return 0;
}