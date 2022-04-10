#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    for (int i = 0; i < n; i++)
    {
        int N,X,P;
        cin>>N;
        cin>>X;
        cin>>P;
        if (((X*3)-(N - X))>=P)
        {
            cout<<"PASS"<<"\n";
        }
        else
        {
            cout<<"FAIL"<<"\n";
        }
        
        
        
    }
    
    
    return 0;
}