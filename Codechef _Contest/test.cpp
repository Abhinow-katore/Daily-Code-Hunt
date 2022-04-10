#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int arr[6]={10, 20,30,0,29,30};
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum = sum +arr[i];
        cout<<sum<<"\n";
        
    }
    
    return 0;
}