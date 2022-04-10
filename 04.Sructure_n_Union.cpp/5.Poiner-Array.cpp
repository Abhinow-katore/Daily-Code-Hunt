#include <iostream>
#include <stdio.h>
using namespace std;

struct point
{
    int x;
    int y;
};



int main(){
    point arr[5]; //assign value

    for (int i = 0; i < 5; i++)
    {
        arr[i].x = i;//assigned arr[i] with value i
        arr[i].y = i*10; //assigned arr[i] with value i*10

    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i].x<<" "<<arr[i].y<<"\n";
    }
    
    
    return 0;
}