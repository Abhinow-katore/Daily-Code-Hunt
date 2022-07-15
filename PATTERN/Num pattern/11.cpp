#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    int n = 2;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout<<" ";
        }
        for (int j = i; j <= n; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
        
    }
    for (int i = 2; i <=n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout<< " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<n-i+j<<" ";
        }
        cout<<"\n";
    }
    
    
    
    
    return 0;
}