#include <iostream>
#include <stdio.h>
using namespace std;

struct point
{
    int x;
    int y;
};
void print(point p)
{ //p as an argument in void
    cout << p.x << " " << p.y << "\n";
    //if *
    p.x = 50; // not works if cout<<p.x;****
}

int main()
{
    point p = {10, 30};
    print(p); //called the value in void
    cout << "\n"
         << p.x; //not worked for void value****
    return 0;
}