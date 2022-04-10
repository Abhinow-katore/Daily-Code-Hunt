#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int j = 0; j < test; j++)
    {
        int N, K;
        cin >> N >> K;
        int arr[K];
        int total = 0;
        for (int i = 1; i <= K; i++)
        {
            arr[i] = N - i;
            // cout<<"Arr"<<arr[i]<<"\n";
            total = total + arr[i];
            if (i == K)
            {
                // value = total / i;
                cout << (total / i) * 2 << "\n";
            }
        }
    }

    return 0;
}