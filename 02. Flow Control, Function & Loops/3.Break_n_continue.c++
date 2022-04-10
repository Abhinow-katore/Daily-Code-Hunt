#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    cout<<" ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (i%3==0)
        {
            continue;                  
        }
        cout<<i<<"\n";

    }
    


    
    return 0;
}