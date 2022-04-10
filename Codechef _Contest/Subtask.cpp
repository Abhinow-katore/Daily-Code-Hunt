#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;
int sum(int arr[], int N)
{
    int sum = 0; // initialize sum

    // Iterate through all elements
    // and add them to sum
    for (int i = 0; i < N; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int N, M, K;
        cin >> N >> M >> K;
        int arr[N];
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            cin >> arr[j];
        }

        // cout<<sum(arr, N)<<"<---"<<"\n";
        if (sum(arr, N) == N)
        {
            cout << "100"
                 << "\n";
            continue;
        }

        for (int k = 0; k < M; k++)
        {
            if (arr[k] == 1)
            {
                count = count + 1;
                // cout<<"cout--"<<count<<"\n";
            }
            if (arr[k] == 0)
            {
                cout << "0"
                     << "\n";
                break;
            }
        }
        // cout<<"count--"<<count;
        if (count == M)
        {
            cout << K << "\n";
        }
    }

    return 0;
}