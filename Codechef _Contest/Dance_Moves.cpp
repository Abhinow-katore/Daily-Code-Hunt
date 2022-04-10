#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int X, Y;
        cin >> X;
        cin >> Y;
        int value = 0;
        int count = 0;
        if (X == Y)
        {
            cout << "0"
                 << "\n";
        }

        if (X > Y)
        {
            count = X - Y;
            cout << count;
        }
        
        if (X < Y)
        {
            value = Y - X;
            for (int i = 0; i != value;)
            {
                if (i < value)
                {
                    i = i + 2;
                    count = count + 1;
                }
                if (i > value)
                {
                    i = i - 1;
                    count = count + 1;
                }
            }
            cout<<count<<"\n";
        }
        
    }

    return 0;
}