#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    
    for (int i = 0; i <=7; i++)
    {
        for (int j = 7-i; j >=1; j--)
        {
            cout<<j+i;
        }
        cout<<"\n";
        
    }
    
    
    return 0;
}