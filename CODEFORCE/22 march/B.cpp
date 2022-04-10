#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
using ll = long long;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, B, x, y;
        cin >> n >> B >> x >> y;
        int sum = 0;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            // cout<<sum;
            if (sum + x <= B)
            {
                sum = sum + x;
                arr.push_back(sum);
                continue;
            }
            if (sum + x > B)
            {
                sum = sum - y;
                arr.push_back(sum);
            }
        }
        ll add = 0;
        ll M = 1000000007;
        for (int i = 0; i < n; i++)
        {
            add = (add%M + arr[i]%M);
        }
        cout << add << "\n";
        // cout << accumulate(arr.begin(), arr.end(), initial_sum)<<" ";
    }

    return 0;
}
