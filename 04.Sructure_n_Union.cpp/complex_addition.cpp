#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

struct num
{
    int real;
    
    int ideal;
};

int main()
{
    num n1, n2, n3;
    cin >> n1.real>> n1.ideal;
    cin >> n2.real>> n2.ideal;

    n3.real = n1.real + n2.real;
    n3.ideal = n1.ideal + n2.ideal;
    cout << n3.real << " + " << n3.ideal<<"i";



    return 0;

}