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
    int time_comp = 0 ;
    for (int j = 1; j < n; j++)
    {
        int k = arr[j];
        int i = j-1;
        while (i>=0 && k<arr[i])
        {
            arr[i+1] = arr[i];
            i--;
            time_comp ++;
        }
        arr[i+1] = k;
        time_comp ++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    if( time_comp<n)cout<<"O(n):"<<time_comp;
    if(time_comp>n && time_comp<=n*n) cout<<"O(n^2);" 
<<time_comp;    
    
    
    return 0;
}