#include <iostream>
#include <stdio.h>
using namespace std;
int max(int arr_new[],int n){
    int ans = arr_new[0];
    for (int i = 0; i < n; i++)
    {
        if (arr_new[i]> ans)
        {
            /* code */
            ans = arr_new[i];
        }
        
    }
    return ans;
    

}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr1[n];
        int arr2[n];
        int arr_new[n];
        int new1 = 0;
        int new2 = 0;
        for (int j = 0; j < n; j++)
        {
            /* code */

            cin >> arr1[j];
            arr1[j] = arr1[j] * 20;
            // new1 = arr1[j];
        }
        for (int k = 0; k < n; k++)
        {
            cin >> arr2[k];
            arr2[k] = arr2[k] * 10;
            // new2 = arr2[k];
        }
        // arr_new[n] = new1 - new2;
        for (int i = 0; i < n; i++)
        {
            int ans = 0;
            arr_new[i] = arr1[i] - arr2[i];
            // cout<<arr_new[i]<<" ";
            if (arr_new[i]<0)
            {
                arr_new[i]= ans;
            }
            
        }
        
         cout<< max(arr_new,n)<<"\n";
        
        
        // cout<<arr_new[n]<<"\n";
    }
    

    return 0;
}