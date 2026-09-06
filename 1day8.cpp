# include <iostream>
 using namespace std;
  
  typedef struct employee
  {
    /* Code */
    int eid; //4
    char favchar; //1
    float salary; //4
  } ep;

  union money
  {
    /* Code */
    int rice; //4
    char car; //1
    float pounds; //4
  };


  int main() {
    enum Meal { breakfast, lunch , dinner };
    // Meal m1 = breakfast;
    // cout<<m1;
    // Meal m2 =  dinner;
    // cout<<m2;
    // Meal m3 = lunch;
    // cout<<m3;

    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;

    // ep Prince;
    // union money m1;
    // m1.rice = 45;
    // cout<< m1.rice <<endl;
  

    // struct employee shayam;
    // struct employee kumar;
    //  Prince.eid = 1;
    //  Prince.favchar = 'c';
    //  Prince.salary = 25000000;
    //  cout<<"The value is "<<Prince.eid<<endl;
    //  cout<<"The value is "<<Prince.favchar<<endl;
    //  cout<<"The value is "<<Prince.salary<<endl;



    return 0;
} 
  