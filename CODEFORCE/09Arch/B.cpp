#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int count = 0;
        int val = n;

        int flag = 0;
        int flag1 = 0;
        while (val % 32768 != 0)
        {

            // if(val%32768==0){
            //     cout<<count<<"\n";
            //     break;
            // }
            if (abs(val - 32768) < 10)
            {
                count++;
                val = val + 1;
                flag1 = 1;
            }
            if (val % 2 == 0 && flag1 == 0)
            {
                val = val * 2;
                count++;
            }

            if (val % 2 != 0 && flag == 0)
            {
                count++;
                val = val + 1;
                flag = 1;
            }

            // cout<<abs(val - 32768)<<" ";
        }
        cout << count << "\n";
    }

    return 0;
}