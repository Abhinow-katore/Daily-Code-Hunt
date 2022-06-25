#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
	int n,m;
	cin>>n>>m;
	int a[n];
    int new_arr[n];
	for(int i = 0 ; i <n ;i++){
		cin>>a[i];
        new_arr[i] = a[i];
	}
    int min = a[0];
    int val = 0 ;
    for(int i = 0; i < n; i++){
        if(a[i] < min){
            min = a[i];
            val = i;
        }
    }
    if(a[val]<0)new_arr[val] = m;
    // cout<<val;
    if(a[val+1]<0){
        for (int i = val; i < n; i++)
        {
            if(a[i+1]<0){
                // a[i+1] = 0;
                new_arr[i+1] = 0;
            }
            if(a[i+1]>0)break;
        }
        
    }
    if(a[val-1]<0){
        for (int i = val; i >0 ; i--)
        {
            if(a[i-1]<0){
                // a[i+1] = 0;
                new_arr[i-1] = 0;
            }
            if(a[i+1]>0)break;
        }
        
    }
    int ans= 0 ;
    for (int i = 0; i < n; i++)
    {
        // cout<<new_arr[i]<<" ";
        ans = ans +new_arr[i];

    }
    cout<<ans;
    // cout<<val;
    
	return 0;
}