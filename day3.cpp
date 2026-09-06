# include <iostream>
   using namespace std;
           
         int glo = 5;
         void sum() {
        
            cout<<glo;
         }
      int main() {
          int glo = 3;
          glo = 45;
        //   int a = 12;
        //   int b = 23;
          int a = 12, b = 23;
          float c = 3.24;
          char d = 'p';
          bool is_true = true; //is_true =  false;
          sum();
          cout<<glo<<is_true;
        //  cout << "here is the vlaue of a: "<<a<<". \n the value of b: "<<b<<".;
        //  cout << "the value of c: "<<c<<". \n the  value of d: "<<d;"
        
          return 0;
      }