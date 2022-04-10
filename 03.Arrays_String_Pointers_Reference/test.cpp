#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int A = 4, B= 7;
    if (A%2==0 && B%2==0)
    {
        /* code */
        cout<<"He";
    }
    
    if (A%2!=0 && B%2!=0)
    {
        /* code */
        cout<<"She";
    }
    if (A%2!=0 || B%2==0)
    {
        /* code */
        cout<<"Punished";
    }
    if (A%2==0 || B%2!=0)
    {
        /* code */
        cout<<"Punished";
    }
    
    return 0;
}