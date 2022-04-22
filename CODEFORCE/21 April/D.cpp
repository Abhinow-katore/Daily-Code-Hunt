#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int D = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='B' && s[i+1]=='B'&& i<s.length()){
            i++;
            D = 1;
            continue;
        }
        if(s[i] == 'R' && s[i+1] && i<s.length() ){
            i++;
            D=1;
            continue;
        }
        if(D==1 && s[i]=='W'){
            cout<<"NO"<<"\n";
            break;
        }
    }

    return 0;
}