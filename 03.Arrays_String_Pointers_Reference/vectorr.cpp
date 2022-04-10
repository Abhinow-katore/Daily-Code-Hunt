#include <bits/stdc++.h>
using namespace std;

int main()
{
    // initialising the vector
    vector<int> vec = {1, 1, 0, 0, 0, 1, 1};
    int count_start = 2;
    int count_end = 4;
    vec.erase(vec.begin() + 2, vec.begin() + 4);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    //////////////////
    int n = 100;
    int arr[n];
    int zero = 0;
    int one = 0;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        if (arr[i] == 1)
        {
            one++;
        }
    }
    if (zero > one)
    {
        x = 1;
    }
    if (one >= zero)
    {
        x = 0;
    }

    for (int j = 0; j < n; j++)
    {
        
    }
    
