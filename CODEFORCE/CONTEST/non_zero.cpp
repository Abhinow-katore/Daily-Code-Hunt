#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int l, m;
    cin >> l >> m;
    int arr[m - l];
    int arr1[m-l];

    int x = 0;
    int count = 0;
    int j =0;
    for (int i = l; i < m; i++)
    {
        arr1[j] = i;
        j++;
    }
    for (int i = 0; i < m-l; i++)
    {
        cout<<arr1[i];
    }
        int add = arr[l];

    for (int i = 1; i <= m-l; i++)
    {
        add = arr1[i+1] & add;
        cout<<"add:"<<add<<" "<<"for"<<arr1[i]<<"\n";
        if (add == 0)
        {
            cout << "ELEMENATED"<<"\n";
        
            add = x;
            count = count +1;
            continue;
        }
         x = add;
    }
    cout << count << "\n";

    return 0;
}