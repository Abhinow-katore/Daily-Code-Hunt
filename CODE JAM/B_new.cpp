#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int a1[4];
    int a2[4];
    int a3[4];
    int flag =0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a1[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> a2[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cin >> a3[i];
    }
    sort(a1,a1+4);
    sort(a2,a2+4);
    sort(a3,a3+4);
    if(a1[0]==0 ||a2[0]==0||a3[0]==0){
        cout<<"IMPOSSIBLE"<<"\n";
    }
    if(a1[3]+a2[3]+a3[3]<1000000){
        cout<<"IMPOSSIBLE"<<"\n";
    }
    if(a1[3]>=1000000-3){
        cout<<1000000-3<<" ";
        cout<<"1"<<" "<<"1"<<" "<<"1"<<"\n";
    }
    
    return 0;
}