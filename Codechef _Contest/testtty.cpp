#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int X,Y;
    cin>>X;
    cin>>Y;
    int value = Y-X;
    int count = 0;
    if (X < Y)
    {
        cout<<"TEst";
        for (int i = 0; i <10; i++)
        {
            cout<<"TEst";
            if (i < value)
            {
                // i = i + 2;
                count = count + 1;
            }
            if (i > value)
            {
                // i = i - 1;
                count = count + 1;
            }
        }
    }
    return 0;
}