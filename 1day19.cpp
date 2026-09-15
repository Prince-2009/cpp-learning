#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The  Point is: (" << x << " , " << y << ")" << endl;
    }
};

int main()
{
    Point p(3, 9);
    p.displayPoint();

    Point q(6, 4);
    q.displayPoint();

    return 0;
}