#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int r = 0;
    while (n>0)
    {
        /* code */
        r= n%2;
        cout<<r<<"\n";
        n = n/2;
    }

    
    return 0;
}