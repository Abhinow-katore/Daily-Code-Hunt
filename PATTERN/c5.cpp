#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
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
    
    return 0;
}