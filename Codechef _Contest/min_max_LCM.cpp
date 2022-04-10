// C++ program to find LCM of two numbers
#include <iostream>
using namespace std;

// Recursive function to return gcd of a and b
long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

// Driver program to test above function
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a;
        cin >> b;
        cout << lcm(a, a * 2) << " ";
        cout << lcm(a * b - 1, a * b) << "\n";
    }

    return 0;
}
