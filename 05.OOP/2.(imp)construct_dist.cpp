#include <iostream>
#include <stdio.h>
using namespace std;

class point
{
private:
    int x, y;

public:
    point() //<--constructor 1 "p1"
    {
        x = 0;
        y = 0;
    }
    point(int x1, int y1)
    { // <<--constructor 2 "p2"
        x = x1; // or "this ->x = x;"
        y = y1; // or "this ->y = y;"
    }
    point(int a, int b, int c)
    {
        int z = 0;
        x = a;
        y = b;
        z = c;
    }
    void print()
    {
        cout << x << " " << y << "\n";
    }
};

int main()
{
    point p1, p2(10, 20), p3(1, 2, 3); //Structure variable with values
    p1.print();                        //calling function
    p2.print();                        //calling function
    p3.print();                        //calling function

    point *ptr = new point(5, 3);  //assosiate pointer
    ptr->print();                  // calling function with pointer value
    
    point *ptr1 = new point(0, 0); //assosiate pointer
    ptr1->print();                 //calling function with pointer value

    return 0;
}