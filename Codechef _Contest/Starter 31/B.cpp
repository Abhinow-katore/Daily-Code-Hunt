#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int arr1[n];
        int arr2[n];
        for (int k = 0; k < n; k++)
        {
            cin >> arr1[i];
        }
        for (int k = 0; k < n; k++)
        {
            cin >> arr2[i];
        }
        int sum1 = 0;
        int sum2 = 0;
        int count = 0;
        for (int k = 0; k < n; k++)
        {
            sum1 = sum1 + arr1[i];
            sum2 = sum2 + arr2[i];
            if (sum1 == sum2)
            {
                break;
            }
            count++;
        }
        std::cout << count << std::endl;
    }

    return 0;
}
