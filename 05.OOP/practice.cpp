#include <iostream>
#include <stdio.h>
using namespace std;

class human
{

public:
    void func()
    {
        cout << man << " " << work << "\n";
    }
    int man;
    int work;

    human(int m, int w){
        man = m;
        work = w;

    }
};

int main()
{
    human h1(10, 15);
    human h2(10, 50);
    h1.func();
    h2.func();

    return 0;
}