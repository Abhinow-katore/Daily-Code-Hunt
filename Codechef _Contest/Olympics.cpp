#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int sum2 = 0;
        for (int j = 0; j < 6; j++)
        {
            cin>>arr[j];
        }
        for (int j = 0; j < 6; j++)
        {
            // cout<<arr[j]<<"\n";
            if (j<3)
            {
                sum = sum +arr[j];
            }
            if (j>2)
            {
                sum2 = sum2 +arr[j];
            }
            
            
        }

        // cout<<sum;
        // cout<<sum2;
        
        if (sum>sum2)
        {
            cout<<"1"<<"\n";
        }
        if (sum<sum2)
        {
            cout<<"2"<<"\n";
        }
        
        
    }
    
    
    
    return 0;
}