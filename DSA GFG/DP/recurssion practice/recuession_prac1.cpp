#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int recur(int n){
    
    if (n==0)
    {
        return 1;
    }
    return 2* recur(n-1);

}

int main(){
    int n = 5;
    
    cout<<recur(n);
    
    return 0;
}