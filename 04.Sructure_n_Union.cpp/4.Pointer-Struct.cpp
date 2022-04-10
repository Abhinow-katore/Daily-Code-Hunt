#include <iostream>
#include <stdio.h>
using namespace std;
struct point
{
    int x;
    int y;
};


int main(){
    point var = {10,20};
    point *ptr = &var;
    
    cout<<ptr ->x<<" "; //points to  x " ptr said"I am very usefull to set the value of x, thank you"
    
    ptr ->x = 30;
    ptr ->y = 101;
    cout<<var.x<<"\n";
    cout<<var.y;

    return 0;
}