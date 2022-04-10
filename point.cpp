#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

void fun(int *x){
    *x = *x+5;
}

int main(){
    int x;
    cin>>x;
    fun(&x);
    cout<<x;
    int y = 10;
    int *w = &y;
     y = y + *w;
    cout<<y
    <<*w<<w;  
    
    return 0;
}