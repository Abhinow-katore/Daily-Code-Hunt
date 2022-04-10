#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x >= 1 and x < 100)
        {
            cout << "Easy"<<"\n";
        }
        if (x >= 100 and x < 200)
        {
            cout << "Medium"<<"\n";
        }
        if (x >= 200 and x <= 300)
        {
            cout << "Hard"<<"\n";
        }
    }

    return 0;
}