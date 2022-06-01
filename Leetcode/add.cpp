#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+3);
    cout<<"Greatest No:"<<" "<<arr[2]<<"\n";
    cout<<"smallest No:"<<" "<<arr[0];
     
    return 0;
}
