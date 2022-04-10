#include <bits/stdc++.h>

using namespace std;

int main()

{

    int n;

    cin >> n;
    while (n--)

    {

        string s;

        cin >> s;

        long long int n = 0;
        sort(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
        n +=((s[i] - 'a') + 1) * (i + 1);
        cout << n << endl;
    }
}