#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{

    string start;
    cin >> start;
    string end;
    cin >> end;

    char arr[start.size()];
    for (int j = 0; j < start.size(); j++)
    {
        for (int i = 0; i < start.size() - 1; i++)
        {
            if (start[i] == 'X' && start[i + 1] == 'L')
            {
                arr[i + 1] = 'X';
                arr[i] = 'L';
            }
            if (start[i] == 'R' && start[i + 1] == 'X')
            {
                arr[i + 1] = 'R';
                arr[i] = 'X';
            }
            else
            {
                arr[i] = start[i];
                // arr[i+1]=start[i+1];
            }
        }
    }
    char arr1[start.size()];
    int count = 0;
    string value;
    for (int q = 0; q < start.size(); q++)
    {
        arr1[q] = start[q];
        count = 1;
    }
    for (int q = 0; q < start.size(); q++)
    {
        if (arr[q] == arr1[q])
        {
            count = count + 1;
        }
    }

    if (count == start.size())
    {
        cout << "YES";
    }
    if (count != start.size())
    {
        cout << "NO";
    }

    return 0;
}