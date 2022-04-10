#include <iostream>
#include <stdio.h>
using namespace std;

int largest(int arr[], int arr_new[], int n)
{
    int i;
    
    int max = arr[0];
    int point = arr_new[0];
    for (i = 1; i < n; i++)
        if (arr[i] >= max){
            max = arr[i];
            point = arr_new[i];}

 
    return max, point;
}

int main(){
    int n ;
    cin >> n;
    int arr[n];
    int arr_new[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
        arr_new [i] = count;
        count = count +1;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "<<arr_new[i]<<"\n";
    }
    cout<<largest(arr, arr_new, n);
    
    
    return 0;
}