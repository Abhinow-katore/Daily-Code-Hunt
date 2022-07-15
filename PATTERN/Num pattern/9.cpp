#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    // int m = 1;
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<j+1<<" ";
        }
        for (int j = i-1; j >0; j--)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
        
        
        
    }
    
        
    return 0;
}