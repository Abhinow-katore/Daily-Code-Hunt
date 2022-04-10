#include <bits/stdc++.h>
using namespace std;
int solve()
{

    int numberA;
    cin >> numberA;
    int an[numberA];
    int pre[numberA];
    int sum = 0;
    for (int i = 0; i < numberA; i++)
    {
        cin >> an[i];
        sum += an[i];
        pre[i] = sum;
    }
    int res = sum;
    for (int i = 0; i < numberA; i++)
    {
        res = min(max(pre[i], sum - pre[i]), res);
    }
    cout << res << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
}