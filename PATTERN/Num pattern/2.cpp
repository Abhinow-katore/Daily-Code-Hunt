#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int s;
    cin>>s;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<s;
        }
        cout<<"\n";
        s++;

    }
    s--;
    for (int i = 1; i <=n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout<<s;
        }
        cout<<s--;
        cout<<"\n";
        
    }
    
    
    return 0;
}