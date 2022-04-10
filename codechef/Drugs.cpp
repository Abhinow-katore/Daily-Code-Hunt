// #include <iostream>
// #include <stdio.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin >> n;
//         int k;
//         int l;
//         cin >> k >> l;
//         int arr[n];
//         int speed = 0;
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[j];
//         }
//         if (k > l || k< 0)
//         {
//             cout << "No"
//                  << "\n";
//             break;
//         }

//         speed = arr[0] + k;
//         // cout<<speed;

//         for (int j = 0; j < n-1; j++)
//         {
//             if (speed > arr[j+1])
//             {
//                 count = count + 1;
//             }
//         }
//         // cout<<count;
//         if (count < n-1)
//         {
//             cout << "No"
//                  << "\n";
//         }
//         if (count >= n-1)
//         {
//             cout << "Yes"
//                  << "\n";
//         }
//     }

//     return 0;
// }

/////////////////////////
#include <iostream>
using namespace std;

int main(){

    int i, j, t, n, k, l, speed;

    bool flag;
    int array1[n];

    cin >> t;

    i = 0;

    while (i < t)
    {

        cin >> n >> k >> l;

        j = 0;
        while (j < n)
        {

            cin >> array1[j];
            j++;
        }

        if (k > 0)

            speed = array1[n - 1] + k * (l - 1);

        else

            speed = array1[n - 1];

        flag = true;

        for (j = n - 2; j >= 0; j--)
            if (speed <= array1[j])
                flag = false;

        if (flag == true)
            cout << "yes"
                 << "\n";

        else
            cout << "no"
                 << "\n";
        i++;
    }
    return 0;
}