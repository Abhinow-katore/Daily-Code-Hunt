#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int j = 1; j < n; j++)
    {
        int k = arr[j];
        int i = j-1;
        while (i>=0 && k<arr[i])
        {
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = k;
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    return 0;
}