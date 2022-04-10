#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        int sum;
        int total;
        int a,b,c;
        cin>>x>>y>>z;
        cin>>a>>b>>c;
        
        sum = x+y+z;
        total = a+b+c;
        if (sum==total)
        {
            cout<<"Pass"<<"\n";
        }
        else{
            cout<<"Fail"<<"\n";
        }
    }
    
    
    return 0;
}