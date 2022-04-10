#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int nocheck1(float e)
{
    float q;
    int count1 = 0;
    q = e;
    while (q != (int(q)))
    {
        count1++;
        q = q * 10;
    }
    // cout<<count1;
    return count1;
}

int main()
{
    int n;
    int count = 0;
    cin >> n;
    for (int e = 1; e < n; e++)
    {
        float x, y;
        x = sqrt(e);
        y = cbrt(e);
        int value1, value2;

        value1 = nocheck1(x);
        value2 = nocheck1(y);
        // cout<<value1;
        // cout<<"\n";
        // cout<<value2<<"\n";
        if ((value1 == 0) || (value2 == 0))
        {
            count = count + 1;
        }
    }
    cout<<count;
    return 0;
}