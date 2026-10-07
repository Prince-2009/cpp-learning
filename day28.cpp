#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void Student::set_roll_no(int r)
{
    roll_no = r;
}

void Student::get_roll_no()
{
    cout << "The roll number is: " << roll_no << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;
    float chemistry;

public:
    void set_marks(float, float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2, float m3)
{
    maths = m1;
    physics = m2;
    chemistry = m3;
}

void Exam::get_marks()
{
    cout << "The marks in maths are: " << maths << endl;
    cout << "The marks in physics are: " << physics << endl;
    cout << "The marks in chemistry are: " << chemistry << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_no();
        get_marks();
        cout << "The percentage is: " << (physics + maths + chemistry) / 3 << "%" << endl;
    }
};

int main()
{
    Result Ayush;
    Ayush.set_roll_no(205);
    Ayush.set_marks(89.7, 92, 98.3);
    Ayush.display_result();

    return 0;
}