// #include <iostream>
// #include <stdio.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     int n;
//     int arr[n];
//     for (int i = 0; i < t; i++)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             int count = 0;
//             for (int j = i; j < n; j++)
//             {
//                 /* code */
//                 if (arr[i] != arr[j])
//                 {
//                     /* code */
//                     count = count + 1;
//                 }
//             }
//             cout << count;
//         }
//     }

//     return 0;
// }
/////////////
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    cin >> n;
    int arr[n];
    int c = 0;
    for (int i = 0; i < t; i++)
    {
        /* code */
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = i + 1; j < n; j++)
            {
                /* code */
                // cout<<arr[i]<<" ";
                // cout<<arr[j]<<"\n";
                if (arr[i] == arr[j])
                {
                    /* code */
                    // count = count + 1;
                    // c = 0;
                    // cout<<c;
                    
                    break;
                }
                else if (arr[i] != arr[j])
                {
                    c = 1;
                    cout<<c;
                }
            }
        }
        cout<<c;
        if (c!=0)
        {
            cout<<"prekrasnyy";
        }
        else if(c==1)
        {
            /* code */
            cout<<"ne krasivo";
        }
        
        
    }

    return 0;
}