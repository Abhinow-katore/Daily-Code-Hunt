#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    int n = 7;
    for (int i = 0; i < n*n; i++)
    {
        if(i%n==0)cout<<"\n";
        if(i%2==0)cout<<"1";
        if(i%2!=0)cout<<"0";
    }
    
    
    
    return 0;
}