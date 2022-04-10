#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

struct Node
{
    

    void print_func()
    {
        cout << data << "\n";
    }
    int data;
    Node(int d)
    {
        d = data;
    }
};

int main()
{
    Node var(10);
    var.print_func();

    return 0;
}