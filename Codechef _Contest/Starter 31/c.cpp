#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int test;
    cin >> test;
    for (int k = 0; k < test; k++)
    {
        /* code */
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (ans >= 0)
            {
                ans = ans - i;
                continue;
            }
            if (ans < 0)
                ans = ans + i;
        }
        cout << ans << "\n";
    }
    return 0;
}
