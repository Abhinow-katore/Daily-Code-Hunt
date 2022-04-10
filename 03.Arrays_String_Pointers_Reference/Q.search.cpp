#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int N = 4;
    int arr[N] = {51,54,99,32};
    int x= 100;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == x)
        {
            cout<<i;
        }
        if(arr[i]<0)
            return -1;
    }

    return 0;
}