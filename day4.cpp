# include <iostream>
    
     using namespace std;

     int main() {
         
        //  ************* Float, double and long double Literals *************
        //   float a = 32.6F;
        //   long double b = 32.6L;
        //   cout<<"The size of 32.4 is: "<<sizeof(32.4)<<endl;
        //   cout<<"The size of 32.4f is: "<<sizeof(32.4f)<<endl;
        //   cout<<"The size of 32.4F is: "<<sizeof(32.4F)<<endl;
        //   cout<<"The size of 32.4l is: "<<sizeof(32.4l)<<endl;
        //   cout<<"The size of 32.4L is: "<<sizeof(32.4L)<<endl;
        //   cout<<"The value of a is:" <<a<<endl<<"The value of b is:"<<b;
         
        //************* Refrence variables *************
        //Naksh ----> nath -----> baba ------> kuku
         float c = 828;
         float & d = c;
         cout<<c<<endl;
         cout<<d<<endl;
        
        //************* Typecasting *************
        int e = 33;
        float f = 33.43;
        cout<<"The value of e is:"<<(float)e<<endl;
        cout<<"The value of f is:"<<(int)f<<endl; 

      return 0;
     }
