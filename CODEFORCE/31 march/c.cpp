#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int j = 0; j < test; j++)
    {
        string s;
        cin >> s;
        int count = 0;
        stack<int> st;
        int val = 0;
        string new_str ;
        for (int i = 0; i < s.length(); i++)
        {
            if (st.empty())
            {
                st.push(s[i]);
                val =0;
                continue;
            }
            if (st.top() == s[i])
            {
                st.pop();
                val = 0;
                continue;
            }
            if(st.top()!=s[i]){
                if(s[i]==s[i+1]){
                    st.pop();
                    i = i+2;
                    continue;
                }
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}