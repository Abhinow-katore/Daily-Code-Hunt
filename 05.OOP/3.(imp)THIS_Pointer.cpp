#include <iostream>
#include <stdio.h>
using namespace std;

class point
{
private:
    int x, y;

public:
    point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void print()
    {
        cout << x << " " << y << "\n";
    }
};

int main()
{
    point p1(10, 20), p2(5,6);
    p1.print();
    p2.print();

    return 0;
}