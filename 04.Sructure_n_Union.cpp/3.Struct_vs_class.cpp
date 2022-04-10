#include <iostream>
#include <stdio.h>
using namespace std;

struct point
{
    int x;
    int y;
    point(int a, int b){
        x= a; 
        y =b;
    }
    void print(){
        cout<<x<<" "<<y<<"\n";
    }
};


int main(){
    point p(10,20);
    p.print();
    
    return 0;
}