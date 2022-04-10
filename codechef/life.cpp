#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

// int main(){
//     int a = 0;
//     do
//     {
//         cin>>a;
//         cout<<a<<"\n";
//         if(a==42){
//             cin>>a;
//             break;
//         }
//         /* code */
//     } while (a!=42);
//     return 0;
    

// }


int main(){
    vector<int>v;
    int n;
    int i= 0;
    while (i!=42)
    {
        int x;
        cin>>x;
        v.push_back(x);
        i++;
        if(i==42){
            cin>>x;
            break;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }


    return 0;
}

int main()
{
    int arr[100];
    int pos = 0;
    for (int i = 0; i < 100; i++)
    {
        cin >> arr[i];
        if (arr[i] == 42)
        {
            cin >> arr[i + 1];
            pos = i - 1;
            break;
            
        }
    }
    for (int i = 0; i <= pos; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}