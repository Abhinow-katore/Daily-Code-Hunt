#include <stdio.h>
#include <iostream>
using namespace std;
int x = 15; //global scope
int main()
{
    int x = 10; // outer scope
    {

        int x = 60; //local scope

        cout << x;
        return 0;
    }
}
