#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    string arr;
    getline(cin, arr);
    int n = arr.size();
    // int arr[n];
    int zero = 0;
    int one = 0;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '0')
        {
            zero++;
            // cout<<zero<<"\n";
        }
        if (arr[i] == '1')
        {
            one++;
            // cout<<zero<<"\n";
        }
    }
    if (zero > one)
    {
        x = 1;
    }
    if (one >= zero)
    {
        x = 0;
    }
    // cout<<zero<<"\n";
    // cout<<one<<"\n";/
    int count_start = 0;
    int count_end = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x && arr[i + 1] != x)
        {
            cout << "Flip";
            continue;
        }
        if (arr[i] == x && arr[i + 1] == x)
        {
            count_start = i;
        }
        for (int j = i; j <= n; j++)
        {
            if (arr[j] == x)
            {
                count_end = j;
            }
        }
        arr.erase(arr.begin() + count_start, arr.begin() + count_end);
        i = count_end + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}
/////////////////////
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    string arr;
    getline(cin, arr);
    int n = arr.size();
    // int arr[n];
    int zero = 0;
    int one = 0;
    string x;
    int value = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '0')
        {
            zero++;
            // cout<<zero<<"\n";
        }
        if (arr[i] == '1')
        {
            one++;
            // cout<<zero<<"\n";
        }
    }
    if (zero > one)
    {
        x = '1';
        value = 1;
    }
    if (one >= zero)
    {
        x = '0';
        value = 0;
    }
    // cout<<zero<<"\n";
    // cout<<one<<"\n";/
    cout << x << "\n";
    int count_start = 0;
    int count_end = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == value && arr[i + 1] != value)
        {
            cout << "Flip";
            continue;
        }
        if (arr[i] == value && arr[i + 1] == value)
        {
            count_start = i;
            cout << "count_start" << count_start << "\n";
        }
        for (int j = i; j <= n; j++)
        {
            if (arr[j] == value)
            {
                count_end = j;
                cout << "count_end" << count_end << "\n";
            }
        }
        arr.erase(arr.begin() + count_start, arr.begin() + count_end);
        i = count_end + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}
