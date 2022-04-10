#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int u = 0; u < test; u++)
    {
        string temp;
        int n, m;

        cin >> n >> m;

        int k = m;
        temp.clear();

        string s;

        cin >> s;

        int i = 0;

        int j = k - 1;

        int rev = 1;

        while (i <= j)
        {

            if (rev)
            {

                temp += s[i];

                i++;
            }

            else
            {

                temp += s[j];
                j--;
            }

            rev ^= 1;
        }
        reverse(temp.begin(), temp.end());
        for (int i = k; i < n; i++)
        {
            temp += s[i];
        }
        cout << temp << endl;
    }

    return 0;
}