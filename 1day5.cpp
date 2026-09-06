# include <iostream>
  using namespace std;

   int main() {
    
     int age;
     cout<<"What is your age: ";
     cin>>age;

    //  selection control structure: If-else ladder
    //     if ((age<18) && (age>1)) {
    //     cout<<"You are a child keep away"<<endl;
    //  }

    //  else if (age==18) {
    //     cout<<"You age adult you can come for 5-6hr"<<endl;
    //  }
    //  else if (age<1) {
    //     cout<<"Your are not born"<<endl;
    // }

    //  else {
    //     cout<<"You may please come"<<endl;
    //  }



    //  selection control structure: switch case statements
  
      switch (age)
      {
        case 18:
        cout<<"You are 18"<<endl;
        break;

        case 35:
        cout<<"You are 35"<<endl;
           break;

        case 25:
        cout<<"You are 25"<<endl;
        
        default:
        cout<<"No special case"<<endl;
      }

     return 0;
   } 