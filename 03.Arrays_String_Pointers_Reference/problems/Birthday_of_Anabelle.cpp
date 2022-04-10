#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int t , n;
    cin>>t;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            /* code */
            x = arr[j] +arr[i];
            // cout<<x<<"\n";
        }
        cout<<x;
        
    }
    
    
    
    return 0;
}