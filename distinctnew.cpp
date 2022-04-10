#include <bits/stdc++.h>
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


int main()
{
    // vector< pair <int,int> > vect;
    int n;
    int a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int N;
        // vector<int> arr;
        cin >> N;
        int arrValue[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arrValue[i];
        }
        int arr[N];
        int arr_new[N];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j <= N; j++)
            {

                arr[j] = j % arrValue[i];
                arr_new[j] = j;
                cout << arr[j] << " " << arr_new[j] << " mod " << arrValue[i] << "\n";
            }
            for (int i = 0; i <= N; i++)
            {
                cout << arr[i];
            }

            
            cout << "\n";
            cout<<largest(arr, arr_new, n);
            cout << "\n";

            // break;
        }
    }

    return 0;
}