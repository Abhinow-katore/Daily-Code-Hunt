#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int val =0;
        for(int j= 0; j<n;j++){
            val = val*2 +1;
        }
        cout<<val<<"\n";
    }

    return 0;
}