#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int p = 0; p < test; p++)
    {
        int n, r, b;
        cin >> n >> r >> b;
        int loop = b + 1;
        // int l1= r%b;
        // int l2 = r%(b+1);
        // int solve = 0;
        // if(l1<=l2){
        //     solve = b;
        // }
        // else solve=b+1;
        int val = r / (loop);
        int ans = r % (b + 1);
        int i = 0;
        while (r)
        {
            int sol = val + (ans > 0);
            ans = max(ans - 1, 0);
            r = r - sol;
            for (int j = 0; j < sol; j++)
            {
                cout << "R";
            }
            if (b > 0)
            {
                cout << "B";
                --b;
            }
        }
        cout << "\n";
    }

    return 0;
}