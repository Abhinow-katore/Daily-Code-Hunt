#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        if (i==0)
        {
            arr[i]=1;
            continue;
        }
        if (i=n-1)
        {
            arr[i]==0;
            continue;
        }
        
        
        arr[i]= 2*i;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
    
    
    
    return 0;
}