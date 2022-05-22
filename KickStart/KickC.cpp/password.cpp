#include <iostream>
using namespace std;
void printStrongNess(string &input)
{
    int n = input.length();
    // Checking lower alphabet in string
    bool hasLower = false, hasUpper = false;
    bool hasDigit = false, specialChar = false;
    string normalChars = "abcdefghijklmnopqrstu"
                         "vwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
    for (int i = 0; i < n; i++)
    {
        if (islower(input[i]))
            hasLower = true;
        if (isupper(input[i]))
            hasUpper = true;
        if (isdigit(input[i]))
            hasDigit = true;
        size_t special = input.find_first_not_of(normalChars);
        if (special != string::npos)
            specialChar = true;
    }
    if (hasLower == false)
        input.push_back('a');
    if (hasUpper == false)
        input.push_back('A');
    if (hasDigit == false)
        input.push_back('1');
    if (specialChar == false)
        input.push_back('*');
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        string input;
        cin >> input;
        printStrongNess(input);
        if (input.size() < 7)
        {
            for (int i = 0; i < 7 - input.size() + 1; i++)
            {
                input.push_back('1');
            }
        }
        cout << input;
    }
    return 0;
}