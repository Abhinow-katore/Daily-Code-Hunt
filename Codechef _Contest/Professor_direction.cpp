#include <bits/stdc++.h>
using namespace std;

int subsequences(string str, string output[])
{
    if (str.length() == 0)
    {
        output[0] = "";
        return 1;
    }

    int smallerOutputSize = subsequences(str.substr(1), output);

    for (int i = 0; i < smallerOutputSize; i++)
    {
        output[i + smallerOutputSize] = str[0] + output[i];
    }
    return 2 * smallerOutputSize;
}

string get_dir(string s)
{
    int count = 0;
    string direction = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[0] == '\n')
            return NULL;
        if (s[i] == 'L')
            count--;
        else
            count++;
    }
    if (count > 0)
    {
        if (count % 4 == 0)
            direction = "N";
        else if (count % 4 == 1)
            direction = "E";
        else if (count % 4 == 2)
            direction = "S";
        else if (count % 4 == 3)
            direction = "W";
    }
    if (count < 0)
    {
        if (count % 4 == 0)
            direction = "N";
        else if (count % 4 == -1)
            direction = "W";
        else if (count % 4 == -2)
            direction = "S";
        else if (count % 4 == -3)
            direction = "E";
    }
    return direction;
}
int main()
{
    int num;
    cin >> num;
    for (int z = 0; z < num; z++)
    {
        string s;
        string c = "S";
        string output[1000];
        string direct;
        std::cin >> direct;
        int outputSize = subsequences(direct, output);
        for (int i = 0; i < outputSize; i++)
        {
            s = output[i];
            // cout<<output[i];
            if (get_dir(s) == c)
            {
                // std::cout << "YES" << std::endl;
                cout << (get_dir(s));
                cout << "YES"
                     << "\n";
                break;
            }
            if (i = outputSize - 1)
            {
                cout << "NO"
                     << "\n";
                break;
            }
            else
            {
                // std::cout << "No" << std::endl;
                // cout << (get_dir(s));
                // cout<<"NO"<<"\n";
                continue;
            }
        }
    }

    // cout << (get_dir(s));
}