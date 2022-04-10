#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int line;
    cin >> line;
    for (int i = 0; i < line; i++)
    {
        int N, K;
        cin >> N >> K;
        int arr[N];
        int total = 0;
        int possible = 0;
        int top_add = 0;
        int initial = 0;
        int if_zero = 0;
        for (int i = 1; i <= K; i++)
        {
            if (K == 1)
            {
                initial = N - i;
                cout << initial*2 << "\n";

                break;
            }

            arr[i] = N - i;
            // cout << arr[i] << "\n";
            if (i < K)
            {
                top_add += arr[i];
            }
            if (arr[i]==0)
            {
                if_zero = top_add /N;
                cout<<if_zero<<"\n";
                break;
            }
            

            if (i == K)
            {

                total = N * (N - 1) / 2;
                possible = total - top_add;
                // cout << "total:" << total << "\n";
                // cout<<"possible"<<possible<<"\n";
                // cout << "top_add" << top_add << "\n";
                // cout<<arr[i-1];
                if (arr[i - 1] > arr[i]  )
                {
                    arr[i] = arr[i] + 1;
                    cout << arr[i] * 2 << "\n";
                }
            }
            // cout<<"not worked";
        }
    }

    return 0;
}