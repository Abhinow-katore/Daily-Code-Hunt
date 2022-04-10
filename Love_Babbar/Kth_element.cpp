#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    ///////////////////////
    cout << "    ------------------"<<"\n";
    for (int i = 0; i < n; i++)
    {
        cout <<" "<< arr[i]<<"\n";
            

        
    }
    cout<<"-----------> smallest element";
    cout<<" "<<arr[k-1];
    cout << "    ------------------";
    //////////////////
    int value = 0;
    for (int i = 0; i < k; i++)
    {
        if (k = i)
        {
            cout<<arr[i];
            break;
        }
        cout<<arr[i]<<"\n";
        
        
    }

    
    // cout<<"\n"<<"------";
    // cout<<value;
    

    return 0;
}