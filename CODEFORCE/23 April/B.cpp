// CPP code to illustrate
// erase(size_type idx, size_type len )
#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

// Driver code
int main()
{
    int test;
    cin >> test;
    for (int k = 0; k < test; k++)
    {
        string str;
        cin >> str;
        int i = 0;
        if(str.length()<2){cout<<"NO"<<"\n";continue;}
        if(str[0]=='B'||str[str.length()-1]=='A'){cout<<"NO"<<"\n";continue;}
        if (str[0] != str[str.length() - 1])
        {
            str.erase(0, 1);
            str.erase(str.length() - 1, 2);
        }
        
        // cout<<str<<"\n";
        while (i < str.length())
        {
            if (str[i] == 'A' && str[i + 1] == 'B')
            {
                str.erase(i, 2);
                i = 0;
                continue;
            }
            i++;
            // cout<<str<<"\n";
            // if(i>str.length())break;
        }
        // cout<<str;
        string val = str;
        sort(val.begin(), val.end());
        if (str.length() == 0 || val[val.length() - 1] == 'B')
            cout << "NO"
                 << "\n";
        else
            cout << "YES"
                 << "\n";
    }
    return 0;
}