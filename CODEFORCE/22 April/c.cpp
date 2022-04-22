#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int initial_sum  = 0; 
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int val = 0;
    sort(a,a+n);
    int flag=0;
    int i = 0;
    int charge = 0;
    while (flag=0)
    {
        // if (accumulate(a, a+n, initial_sum)<=m)
        // {
        //     val=val+n;
        // }
        if(a[i]<=m && charge==0){
            val++;i++;
        }
        if(a[i]==n-1 && charge==0){
            i=0;
            charge = 1;
        }
        if(charge==1){
            a[i] = a[i]+1;
            i++;
        }
        if(charge==1 && a[i]==n-1){
            charge = 0;
        }
        int count=0;
        for (int l = 0; l < n; l++)
        {
            if(a[l]>m){
                count++;
            }
            if(count==n)flag=1;
            else count=0;
        }
        

    }
    cout<<val;
    
    
    
    return 0;
}