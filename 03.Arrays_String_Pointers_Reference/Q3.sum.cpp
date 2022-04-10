#include <iostream>
#include <stdio.h>
using namespace std;

int sum(int arr[], int n)
{
    int add = 0;
    for (int i = 0; i < n; i++)
    {
        add = add + arr[i];
    }
    return add;
}
int main()
{
    int n;
    
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = sum(arr, n);
    std::cout << ans << "\n";

    return 0;
}
