#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    int n =6;
    int val= 0;
    for (int i = 1; i <n+1; i++)
    {
        for (int j = 0; j <i ; j++)
        {
            cout<<val+1;
            val = val+1;
            // if(j!=0||j!=n-1)cout<<"*";
            if(j==i-1)continue;
            else cout<<"*";
        }
        cout<<"\n";
        
        
    }
    
    
    return 0;
}