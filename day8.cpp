# include <iostream>
  using namespace std;
    
    int main() {
    
        // Array Example:
        int marks[] = {27, 89, 47, 49};
        
        cout<<"These are marks"<<endl;

        // we can aslo change the value of an array
        // marks[3] = 43;
        cout<<marks[0]<<endl;
        cout<<marks[1]<<endl;
        cout<<marks[2]<<endl;
        cout<<marks[3]<<endl; 

        int mathMarks[4];
        mathMarks[0] = 44;
        mathMarks[1] = 34;
        mathMarks[2] = 65;
        mathMarks[3] = 72;
        
        cout<<"\nThese are mathsMarks"<<endl;
        cout<<mathMarks[0]<<endl;
        cout<<mathMarks[1]<<endl;
        cout<<mathMarks[2]<<endl;
        cout<<mathMarks[3]<<endl;

        // Made from for loop:
        for (int i = 0; i  < 4; i++)
        {
            cout<<"The value of marks"<<(i)<<" is " <<marks[i]<<endl;
        }

        // Made from while loop:
        // int i = 0;
        //  while(i < 4) {
        //     cout<<"The value of marks"<<(i)<<" is:"<<marks[i]<<endl;
        //     i++;
        //     }

        // Made from do-while loop:
        // int i = 0;
        // do {
        //     cout<<"The value of marks"<<i<<" is:"<<marks[i]<<endl;
        //     i++;
        // }
        //  while(i < 4);

        // Pointer and Arrays:

         int* p = marks;
         cout<<"\n"<<*(p++)<<endl;
         cout<<*(++p)<<endl;

        cout<<"\nThe address of marks[0] is:"<<p<<endl;
        cout<<"The address of marks[1] is:"<<(p+1)<<endl;
        cout<<"The address of marks[2] is:"<<(p+1)<<endl;
        cout<<"The address of marks[3] is:"<<(p+1)<<endl;

        // cout<<"\nThe value of marks[0] is:"<<*p<<endl;
        // cout<<"The value of marks[1] is:"<<*(p+1)<<endl;
        // cout<<"The value of marks[2] is:"<<*(p+2)<<endl;
        // cout<<"The value of marks[3] is:"<<*(p+3)<<endl;
        

        return 0;
      
    }