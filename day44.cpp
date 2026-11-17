#include <iostream>
#include <fstream>
using namespace std;
/*
The useful classes for working with file in c++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// In order work with files in c++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1. Using the constructor.
// 2. Using the member function open() of the class.

int main() {
    string st = "Hey, This is from Prince side.";
    string st1 ;

    // Opening file using constructor and writing it.
    ofstream out("sample44a.txt");
    out<<st;
    
    // Opening file using constructor and reading it.
    ifstream in("sample44b.txt");
    // in>>st1;
    getline(in, st1);
    cout<<st1;

    return 0;
}