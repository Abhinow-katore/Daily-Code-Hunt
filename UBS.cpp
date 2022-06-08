#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n;i++){
        arr[i] = i+1;
        // cout<<arr[i];
    }
    int count = 0 ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i]%arr[j]==0){
                count++;
            }
        }
        
    }
    cout<<count;
    
    return 0;
}