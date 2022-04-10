#include <iostream>
#include <stdio.h>
using namespace std;

void  countingSort( int arr[], int n){
    int k = arr[0];
    for(int i = 0; i <n; i++){
        k = max(k,arr[i]);
    }

    int count[n] = {0};
    int value = 0;
    for (int i= 0; i <n;i++){        
        value = count[arr[i]] ++;
        
    }
    // cout<<value;
    // return ;



}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i <n ; i++){
        cin>>arr[i];
    }
    cout<<countingSort;
    
    return 0;
}