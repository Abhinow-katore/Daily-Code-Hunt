#include <iostream>
#include <stdio.h>
using namespace std;

class Complex

{
private:
    int real;
    int image;

public:
    void print()
    {
        cout << real << " +i" << image << "\n";
    }

    Complex(int r, int i)
    {
        real = r;
        image = i;
    }
};

int main()
{
    Complex C1(10, 15);
    C1.print();

    return 0;
}