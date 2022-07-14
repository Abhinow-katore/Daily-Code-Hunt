#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    for (int i = 0; i < 6; i++)
    {
        for (int j = i; j < 6; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
            cout<<" ";
        }
        cout<<"\n";
        
        
    }
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int j = i; j < 6; j++)
        {
            cout<<"*";
            cout<<" ";
        }
        cout<<"\n";
        
    }
    
    return 0;
}