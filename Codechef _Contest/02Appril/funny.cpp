#include <bits/stdc++.h>
using namespace std;

void final()
{
    int sol, simpl1, simple2;
    cin >> sol >> simpl1 >> simple2;

    if (max(simpl1, simple2) - min(simpl1, simple2) > 2 || max(simpl1, simple2) - min(simpl1, simple2) <= 0)
    {
        cout << 0 << endl;
    }
    else if (min(simpl1, simple2) == 1 || max(simpl1, simple2) == sol || max(simpl1, simple2) - min(simpl1, simple2) == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
    }
}

int main()
{
    int repeat;
    cin >> repeat;
    for (int i = 0; i < repeat; i++)
    {
        final();
    }

    return 0;
}