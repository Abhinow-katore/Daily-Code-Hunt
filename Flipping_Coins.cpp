#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    int arr[N];
    for (int p = 0; p < N; p++)
    {
        arr[p] = 1;
    }
    for (int p = 0; p < Q; p++)
    {
        int Op, A, B;
        int count = 0;
        cin >> Op >> A >> B;
        if (Op == 0)
        {
            for (int i = A; i <= B; i++)
            {
                // cout<<i<<":"<<arr[i]<<" ";
                if (arr[i] == 0)
                {
                    arr[i] = 1;
                }
                else
                {
                    arr[i] = 0;
                }
            }
        }

        if (Op == 1)
        {
            for (int i = A; i <= B; i++)
            {
                if (arr[i] == 0)
                {
                    count = count + 1;
                }
                // cout<<i<<":"<<arr[i]<<" ";
            }
            cout << count << "\n";
        }
    }

    return 0;
}