#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample46.txt");
    out << "This is my sample46.txt file.\n";
    out << "Hey, I'm Shazam.\n";
    out << "Thank you for seeing my code.";
    out.close();

    ifstream in;
    string st;
    in.open("sample46.txt");
    // in >> st;
    // cout << st;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();

    return 0;
}