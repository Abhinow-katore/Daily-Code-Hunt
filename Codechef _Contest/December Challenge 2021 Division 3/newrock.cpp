#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int func(char p1, char p2)
{
    int value = 0;
    if ((p1 == 's' && p2 == 'p') || (p2 == 's' && p1 == 'p'))
    {
        value = 1;
    }
    if (p1 == 's' && p2 == 's')
    {
        value = 1;
    }
    if ((p1 == 'p' && p2 == 'r') || (p2 == 'p' && p1 == 'r'))
    {
        value = 2;
    }
    if (p1 == 'p' && p2 == 'p')
    {
        value = 2;
    }
    if ((p1 == 'r' && p2 == 's') || (p2 == 'r' && p1 == 's'))
    {
        value = 3;
    }
    if (p1 == 'r' && p2 == 'r')
    {
        value = 3;
    }

    return value;
}

int main()
{
    int test;
    cin >> test;
    for (int o = 0; o < test; o++)
    {

        int n;
        cin >> n;
        string arr;
        char newarr[n];
        cin >> arr;
        char ch;
        for (int y = 0; y < n; y++)
        {
            arr[y] = arr[y] + 32 ;
        }

        for (int k = 0; k < n; k++)
        {
            newarr[k] = arr[k];
        }
        int winner = 0;
        int step = 0;
        for (int j = 0; j < n; j++)
        {

            for (int i = step; i < n - 1; i++)
            {
                // cout<<arr[i];
                char p1 = arr[i];
                char p2 = arr[i + 1];
                // cout<<"p1:"<<p1;
                func(p1, p2);
                winner = func(p1, p2);
                // cout<<"winner:"<<winner<<"\n";

                if (winner == 1)
                {
                    arr[i + 1] = 's';
                }
                if (winner == 2)
                {
                    arr[i + 1] = 'p';
                }
                if (winner == 3)
                {
                    arr[i + 1] = 'r';
                }
            }
            ch = toupper(arr[n-1]);
            cout<<ch;

            // if (arr[n - 1] == 's')
            // {
            //     cout << 'S';
                
            // }
            // if (arr[n - 1] == 'r')
            // {
            //     cout << 'R';
                
            // }
            // if (arr[n - 1] == 'p')
            // {
            //     cout << 'P';
                
            // }

            step++;
            for (int l = 0; l < n; l++)
            {
                arr[l] = newarr[l];
            }
            // cout << "STEP:" << step << " ";
        }
        cout << "\n";
    }

    return 0;
}