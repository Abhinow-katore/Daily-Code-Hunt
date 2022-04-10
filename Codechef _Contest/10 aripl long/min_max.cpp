#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int hash[*max_element(arr, arr + n) + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 1; i < *max_element(arr, arr + n) + 1; i++)
    {
        cout << hash[i] << " ";
    }
    cout << "\n"
         << "-----------"
         << "\n";
    int i = 0;
    int ans = 0;
    // cout<<*max_element(arr, arr + n);
    int hash_max = *max_element(arr, arr + n);
    cout << "\n";
    while (i<*max_element(arr, arr + n))
    {
        cout << hash[arr[i]] << " ";
        cout << arr[i] << "\n";
        
        if (hash[arr[i]] == 1)
        {
            ans++;
            i++;
            cout<<ans<<" -@1"<<"\n";
            hash[arr[i]]--;
            continue;
        }
        if (hash[arr[i]] > 1 && k >= 1)
        {
            hash[arr[i]]--;
            k--;
            ans++;
          
            cout<<ans<<" -@2"<<"\n";
            continue;
        }
        if (hash[arr[i]] > 1 && k == 0)
        {
            i++;
            int temp = hash[arr[i]] * ((hash[arr[i]] - 1) / 2);
            ans = ans + temp;
              cout<<"temp"<<temp<<" ";
            cout<<ans<<"ans hai"<<"\n";
            cout<<ans<<" -@3"<<"\n";
            continue;
        }
        if (hash[arr[i]] == 0)
        {
            i++;
        }
        if (*max_element(hash, hash + hash_max) == 0)
        {
            break;
        }
    }
    cout << ans<<" ";

    return 0;
}