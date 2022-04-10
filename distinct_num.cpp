#include <iostream>
#include <stdio.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int arr_new[N];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j <= N; j++)
            {

                arr_new[j] = j % arr[i];
                cout << arr_new[j] << " " << arr[i] << "\n";
                // break;
            }
        }

        // for (int i = 0; i < N; i++)
        // {
        //     cout << arr_new[i] << " " << arr_num[i] << "\n";
        // }
    }

    return 0;
}