#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int arr[5];
        int draw = 0;
        int india = 0;
        int eng = 0;
        for (int i = 0; i < 5; i++)
        {
            cin>>arr[i];
        }
        
        for (int i = 0; i < 5; i++)
        {
            // if (arr[i] == 0)
            // {
            //     draw = draw + 1;
            // }
            if (arr[i] == 1)
            {
                india = india + 1;
            }
            if (arr[i] == 2)
            {
                eng = eng + 1;
            }
        }
        if (india==eng)
            cout << "DRAW"<<"\n";

        if (india >eng)
            cout << "INDIA"<<"\n";

        if (eng >india)
            cout << "ENGLAND"<<"\n";
    }

    return 0;
}