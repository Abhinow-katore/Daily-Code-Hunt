#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int j = 0; j < test; j++)
    {
        string word;
        cin >> word;
        int length = word.size();
        int count = 0;
        if(length==1){
            cout<<"NO"<<"\n";
            continue;
        }
        if (length % 2 != 0)
        {
            cout << "NO"<<"\n";
            continue;
        }

        if (length % 2 == 0)
        {
            for (int i = 0; i < length; i++)
            {
                if (word[i] == word[(length / 2) + i])
                {
                    count = count + 1;
                }
            }
        }
        // cout << count;
        if (count == length / 2)
        {
            cout << "YES"<<"\n";
            continue;
        }
        else{
            cout<<"NO"<<"\n";
        }

        
    }
    return 0;
}