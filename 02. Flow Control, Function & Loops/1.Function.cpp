#include <stdio.h>
#include <iostream>
using namespace std;
void func(int id, string name = "NA", string address = "NA")
{
    cout << "My id is" << id << "\n";
    cout << "Name is" << name << "\n";
    cout << "address is" << address << "\n";
}

int main()
{
    func(101, "abhinab", "nagpur");
    cout << "\n";
    func(55, "raju", "mars");
    cout << "\n";
    cout << "none";
    return 0;
}