#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    int ans = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
    
    for (int i = 0; i < n; i++)
    {
        arr[i+1] = arr[i] +arr[i+1];
        ans = arr[i];
        cout<<ans<<" ";
    }
    
    
    return 0;
}