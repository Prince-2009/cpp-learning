#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    friend void Distance(point, point);

    void displaypoint()
    {
        cout << "The point is: (" << x << " , " << y << ")" << endl;
    }
};

void Distance(point o1, point o2)
{
    int x_dis = o2.x - o1.x;
    int y_dis = o2.y - o1.y;
    double Dist = std::sqrt((x_dis) * (x_dis) + (y_dis) * (y_dis));
    cout << "The Distance is: " << Dist << " units " << endl;
}


int main()
{
    point p(9, 3);
    p.displaypoint();

    point q(5, 9);
    q.displaypoint();

    Distance(p, q);

    return 0;
}