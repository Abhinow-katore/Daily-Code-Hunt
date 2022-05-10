#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int k = 0; k < test; k++)
    {
        int size;
        cin >> size;
        string s;
        cin >> s;
        int count = 0;
        int odd = 0;
        int even = 0;
        if (s[0] == '0')
            even = even + 1;
        else
            odd = odd + 1;
        for (int i = 0; i < size; i++)
        {
            if (s[i] == '0')
            {
                if (s[i - 1] == '1' && odd % 2 == 1)
                {
                    count = count + 1;
                    s[i] = '1';
                    odd = 0;
                }
                else
                {
                    even = even + 1;
                }
            }
            else
            {
                if(s[i-1]=='0'&& even%2==1){
                    count = count+1;
                    s[i]='0';
                    even = 0;
                }
                else
                {
                    odd = odd+1;
                }
                
            }
            
        }
        cout<<count<<"\n";
    }

    return 0;
}