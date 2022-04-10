
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    int i =0;
    while (i<n)
    {
    
        
        cin >> k;
        if (k % 2 == 0)
        {
            cout << k << "\n";
        }
        if (k % 2 != 0)
        {
            cout << k + 2 << "\n";
        }
        i++;
    }

    return 0;
}