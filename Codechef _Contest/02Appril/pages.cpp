#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sl, v;
    cin >> sl >> v;
    if (sl == 1 && v == 1)cout << "https://discuss.codechef.com\n";
    else if (sl == 0)cout << "https://www.codechef.com/practice\n";
    else cout << "https://www.codechef.com/contests\n";
    return 0;
}