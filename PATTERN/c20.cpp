#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    n=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j==0)
            {
                cout<<"*";
            }
            else cout<<" ";
            
        }
        cout<<"*";
        cout<<"\n";
        if (i==n-1)
        {
            for (int k = 0; k <= n; k++)
            {
                cout<<"*";
            }
            
        }
        
    }
    
    return 0;
}