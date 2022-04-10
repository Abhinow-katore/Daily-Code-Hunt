//Little Elephant and Candies - LECANDYwitaliy_adm
#include <iostream>
#include <stdio.h>
using namespace std;

int sum(int arr[], int n)
{
    int add = 0;
    for (int i = 0; i < n; i++)
    {
        add = add + arr[i];
    }
    return add;
}

//int ans = sum(arr, n);

int fun(int arr[], int t, int n, int c)
{
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> c;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
        }
        if (sum(arr, n) <= c)
        {
            /* code */
            cout << "YES"<<"\n";
        }
        else if (sum(arr, n) > c)
        {
            /* code */
            cout << "NO"<<"\n";
        }
    }
}

int main()
{
    int t, n, c;
    cin >> t;
    int arr[t];
    fun(arr, t, n, c);

    return 0;
}
//////////////////////
#include <iostream>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int add=0;
         for(int k=0;k<n;k++)
        {
            add+=arr[k];
        }
        if(add<k)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No";
        }
    }
    return 0;
}

