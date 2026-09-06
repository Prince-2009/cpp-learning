# include <iostream>
using namespace std;

int sum(int a,int b) {
   cout<<"Using functions with 2 arguments"<<endl; 
   return a+b;
}

int difference(int a,int b) {
   cout<<"Using functions with 2 agruments"<<endl;
   return a - b;
}
// Calculate volume of cube
int volume(int a) {
   return (a * a * a); 
}
// Calculate volume of cyilnder
int volume(double r , int h) {
   return (3.14 * r*r * h);
}
// Calculate volume of Rectangular box
int volume(int l , int b , int h) {
   return (l * b * h);
}

 int main() {
    cout<<"The sum of 4 and 7 is:"<<sum(4, 7)<<endl;
    cout<<"The difference of 10 and 3 is:"<<difference(10, 3)<<endl;
    cout<<"The volume cube of side 4 is:"<<volume(4)<<endl;
    cout<<"The volume cylinder of radius 4 and height 7 is:"<<volume(4, 7)<<endl;
    cout<<"The volume Rectangular box of 4, 6 and 7 is:"<<volume(4,6, 7)<<endl;

    return 0;
 }