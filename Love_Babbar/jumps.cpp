#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int j = 0; j < n; j++)
        {
            if (j<3)
            {
                sum1 = sum1 + arr[i];
                cout<<sum1<<"\n";
            }
            if (j>=3)
            {
            sum2 = sum2 + arr[i];
            cout<<sum1<<"\n";
            }
            
            
        }

        if (sum1 > sum2)
        {
            cout << "1"<<"\n";
        }
        else
        {
            cout << "2"<<"\n";
        }
    }

    return 0;
}