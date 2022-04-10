#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

vector<int> prefix_fun(string s)
{
    int n = s.size();
    vector<int> pi(n, 0);
    for (int i = 0; i < n; i++)
    {
        int j = pi[i - 1];
        while (j > 0 and s[i] != s[j])
        {
            /* code */
            j = pi[j - 1];
        }

        if (s[i] == s[j])
        {
            j++;
        }
        pi[i] = j;
    }
}

int main()
{
    string s = "abcabcd";
    vector<int> res = prefix_fun(s);
    //int i = 0; i < res; i++
    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> prefix_function(string s)
// {

// int n = s.length();
// vector<int> pi(n, 0);

// for(int i=1; i<n; i++)
// {
// int j = pi[i-1];
// while(j>0 && s[i]!=s[j])
// j = pi[j-1];

// if(s[i]==s[j])
// j++;
// pi[i] = j;
// }
// return pi;
// }

// int main()
// {
// string s = "na";

// vector<int> prefix = prefix_function(s);

// string t = "apnacollege";
// int pos =-1 ;
// int i(0) , j(0) ;

// while(i<t.size()){
//     if(t[i] == s[j]){
//         j++;
//         i++;

//     }
//     else{
//         if(j!= 0){
//             j = prefix[j-1];
//         }
//         else{
//             i++ ; 
//         }
//     }
// if(j == s.size()){
//     pos = i - s.size();
//     break ; 
// }

// }
// cout<<pos<<endl;

// return 0;
// }