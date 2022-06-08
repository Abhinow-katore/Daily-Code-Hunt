#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int val = n/2;
    int mid = val;
    int f = val-1;
    // int l = 
    if(n%2==0){
        cout<<f<<" "<<mid<<" "<<n-(f+mid);
    }
    else{
        cout<<f<<" "<<val<<" "<<val-3;
    }
    
    return 0;
}