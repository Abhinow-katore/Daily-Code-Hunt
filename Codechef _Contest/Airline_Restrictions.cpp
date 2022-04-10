#include <algorithm>
#include <iostream>
#include <stdio.h>
using namespace std;
int fsmallestNumber(int, int, int);
int ssmallestNumber(int, int, int);

int main()
{

    int numberOne, numberTwo, numberThree, d, e, smallestNumber;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> numberOne >> numberTwo >> numberThree;

        cin >> d;
        cin >> e;
        int x = 0;
        smallestNumber = fsmallestNumber(numberOne, numberTwo, numberThree);

        //cout << "The smallest of all three numbers is " << smallestNumber << endl;

        if ((ssmallestNumber(numberOne, numberTwo, numberThree) <= d) && (smallestNumber <= e))
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }
}

int fsmallestNumber(int x, int y, int z)
{
    int smallest = x;

    if (y < smallest)
        smallest = y;
    if (z < smallest)
        smallest = z;

    return smallest;
}

int ssmallestNumber(int x, int y, int z)
{
    if (x < y && x < z)
    {
        return y + z;
    }
    if (y < x && y < z)
    {
        return x + z;
    }
    if (z < x && z < y)
    {
        return x + y;
    }
}

