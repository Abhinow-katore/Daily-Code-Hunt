#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        int K;
        cin >> K;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + N, greater<int>());
        int x = 0;
        x = arr[K - 1];
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] >= x)
            {
                count = count + 1;
            }
            else
                break;
        }
        cout << count << "\n";
    }

    return 0;
}