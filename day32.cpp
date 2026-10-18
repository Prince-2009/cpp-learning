#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }

    void print_number(void)
    {
        cout << "Your roll number is: " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics, chemistry;

public:
    void set_marks(float m1, float m2, float m3)
    {
        maths = m1;
        physics = m2;
        chemistry = m3;
    }
    void print_mark(void)
    {
        cout << "Your result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl
             << "Chemistry: " << chemistry << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_socre(void)
    {
        cout << "Your PT score is: " << score << endl;
    }
};

class Result : public Test, public Sports
{
protected:
    float total;

public:
    void Display(void)
    {
        total = maths + physics + chemistry + score;
        print_number();
        print_mark();
        print_socre();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    Result Prince;
    Prince.set_number(2390);
    Prince.set_marks(89.4, 92, 95.6);
    Prince.set_score(7.0);
    Prince.Display();

    return 0;
}