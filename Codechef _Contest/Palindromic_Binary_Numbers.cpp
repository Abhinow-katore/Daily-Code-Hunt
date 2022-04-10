#include <bits/stdc++.h>
using namespace std;

// Function to convert a decimal number
// to its binary form
string decimalToBinary(int n)
{
    // finding the binary form of the number and
    // converting it to string.
    string s = bitset<64>(n).to_string();

    // Finding the first occurrence of "1"
    // to strip off the leading zeroes.
    const auto loc1 = s.find('1');

    if (loc1 != string::npos)
        return s.substr(loc1);

    return "0";
}

// Driver Code
int main()
{
    int n;

    std::cin >> n;

    // Function call
    cout << decimalToBinary(n) << "\n";
    stringstream geek(decimalToBinary(n));
    int x = 0;
    geek >> x;
    // cout<<x;

    int reversed = 0, remainder, original;
    original = x;

    while (original != 0)
    {
        remainder = original % 10;
        reversed = reversed * 10 + remainder;
        original /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}