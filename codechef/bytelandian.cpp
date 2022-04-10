#include <iostream>
#include <stdio.h>
using namespace std;
int recur(int n){

}

int main()
{
    int n;
    while (cin>>n)
    {
    

        int x, y, z;
        int total = 0;
        x = n / 2;
        y = n / 3;
        z = n / 4;
        total = x + y + z;
        if (total > n)
        {
            cout << total << "\n";
        }
        if (total <= n)
        {
            cout << n << "\n";
        }
    cout << n << "\n";
    }
    return 0;
}