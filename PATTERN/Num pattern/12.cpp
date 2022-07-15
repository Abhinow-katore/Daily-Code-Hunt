#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    int n = 7;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(j%2!=0)cout<<"1";
            else cout<<"0";
        }
        cout<<"\n";
        
    }
    
    
    return 0;
}