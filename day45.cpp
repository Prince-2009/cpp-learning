#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Connecting our file with prince_out stream
    ofstream prince_out("sample45a.txt");

    // Creating a name string and filling it with the string entered by the user
    cout<<"Enter your name: ";
    string name;
    cin>>name;
    
    // Write a string to the file
    prince_out<<"Hey, My name is " + name + ".";
    prince_out.close();

    ifstream prince_in("sample45a.txt");
    string content;
    // prince_in>>content;
    getline(prince_in, content);
    cout<<"The content of the file is: "<<content;
    prince_in.close();

    return 0;
}