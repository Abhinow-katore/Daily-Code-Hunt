#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int num, k;
        cin>>num;
        cin>>k;
        int arr[k];
        int total = 0;
        for (int j = 1; j < k; j++)
        {
            arr[j] = num - j;
            total = total +arr[j];
            if (j ==k)
            {
                cout<<total*2/j<<"\n";
            }
            
        }
        
    }
    
    
    return 0;
}