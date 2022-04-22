#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int initial_sum = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int val = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (accumulate(a, a + n, initial_sum) <= m)
        {
            val = val + n;
            // continue;
        }
        if (accumulate(a, a + n, initial_sum) > m)
        {
            int curr = a[0];
            int count = 0 ;
            for (int k = 0; k < n; k++)
            {
                if ( curr<= m)
                {
                    val++;
                    curr = a[k] +curr;
                    count++;
                }
                if(count==n)i=n;
            }
            i=0;
        }
        for (int j = 0; j < n; j++)
        {
            a[j] = a[j] + 1;
            i = 0;
        }
    }
    cout<<val;
    return 0;
}