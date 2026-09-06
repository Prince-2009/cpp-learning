# include <iostream>
 using namespace std;
  
inline int product(int a,int b) {
    //Not recommended to use below the inline function
    // static int c = 0; //this executes once
    // c = c+1; // next time this function is run, the value of c will be retained #yt17
    //  return a*b+c;
    return a*b;
 }
 
 float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
 }
 
//  int strlen(const char *p) {

//  }

  int main() {
    int a,b;
// cout<<"Enter the value of a and b:"<<endl;
// cin>>a>>b;
// cout<<"The product of a and b is:"<<product(a,b)<<endl;
// cout<<"The product of a and b is:"<<product(a,b)<<endl;
// cout<<"The product of a and b is:"<<product(a,b)<<endl;
// cout<<"The product of a and b is:"<<product(a,b)<<endl;
// cout<<"The product of a and b is:"<<product(a,b)<<endl;
// cout<<"The product of a and b is:"<<product(a,b)<<endl;
// cout<<"The product of a and b is:"<<product(a,b)<<endl;
// cout<<"The product of a and b is:"<<product(a,b)<<endl;
// cout<<"The product of a and b is:"<<product(a,b)<<endl;
// cout<<"The product of a and b is:"<<product(a,b)<<endl;

int money = 100000;
cout<<"if you have money "<<money<<"Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year."<<endl;
cout<<"For VIP:if you have money "<<money<<"Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< "Rs after 1 year."<<endl;
    return 0;
  }