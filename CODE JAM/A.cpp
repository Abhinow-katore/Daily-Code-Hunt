#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << "..";
    for (int i = 1; i < m * 2; i++)
    {
        if (i % 2 == 0)
            cout << "-";
        else
            cout << "+";
    }
    cout << "\n";
    cout << "..";

    for (int i = 1; i < m * 2; i++)
    {
        if (i % 2 == 0)
            cout << ".";
        else
            cout << "|";
    }
    cout << "\n";
    //////////////////////////
    string s;
    for (int i = 1; i < m * 2; i++)
    {
        if (i % 2 == 0)
            s = s + "-";
        else
            s = s +  "+";
    }
    s  = s + "-+";
    string w;
    for (int i = 1; i < m * 2; i++)
    {
        if (i % 2 == 0)
            w = w + ".";
        else
            w = w +  "|";
    }
    w = w+".|";

    for (int i = 0; i < n; i++)
    {
        cout<<s<<"\n";
        cout<<w<<"\n";
    }
    

    return 0;
}