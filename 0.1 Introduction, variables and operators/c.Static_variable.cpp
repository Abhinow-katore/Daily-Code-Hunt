#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    static int x; //prints '0'
    cout<<x; 
    x = 5; //print '5'
    cout<<x; 
    
    
    return 0;
}