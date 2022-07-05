#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int k = 0; k < test; k++)
    {
        int n;
        cin >> n;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            // int
            vec.push_back(val);
        }
        int sub = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sub = vec[i + 1] - vec[i] + sub - 1;
        }
        if (sub <= 2)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";

            // 2 + 3 = 5
            // a = 4
            // b = 5
            // 4+5 
            // a+b 
            // 9
            int a = 5;
            int b = 4;
            int c= a+b ;
            cout<<c;
            for (int i = 0; i < n; i++)
            {
                c  = c + b ; 
            }
            // cout<<c; 
            // int string bool float double long long 
            // array stack queue deque vector 
            // as much thaili you can use here
            // 
            
            


    }

    return 0;
}         