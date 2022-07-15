#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        int pos = 0;
        for (int j = i; j <=n; j++)
        {
            pos++;
            cout<<pos;
        }
        cout<<"\n";
    }
    for (int i = 2; i <=n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<j+1;
        }
        cout<<"\n";
        

        
    }
    
    
    
    return 0;
}