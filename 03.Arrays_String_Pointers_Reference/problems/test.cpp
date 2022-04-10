// #include <stdio.h>
// #include <iostream>
// using namespace std;

// int main()
// {
//     int dfs[] = {20, -1, 5, 18, -90, 60, 52, 60, 0, 61, 43, 52 };
//     int n  = sizeof(dfs)/sizeof(dfs[0]);
//     int x = 0;
//     int a = 0;

//     for (int b = 0; b < n; b++)
//     {
//         if (x == 0)
//         {
//             x = dfs[b];
//             cout<<x<<"<=x"<<"\n";
//             cout<<a<<"<=a"<<"\n";
//             continue;

//         }

//         if (a ==0)
//         {
//             if (x < dfs[b])
//             {
//                 a = x;
//                 x = dfs[b];
//                 cout<<x<<"<=x"<<"\n";
//                 cout<<a<<"<=a"<<"\n";
//                 continue;
//             }
//             else
//             {
//                 if (x == dfs[b])
//                 {
//                     cout<<x<<"<=x"<<"\n";
//                     cout<<a<<"<=a"<<"\n";
//                     continue;
//                 }

//                 a = dfs[b];
//                 continue;
//             }
//         }

//         if (x == dfs[b])
//         {
//             cout<<x<<"<=x"<<"\n";
//             cout<<a<<"<=a"<<"\n";
//             continue;
//         }

//         if (x < dfs[b])
//         {

//             a = x;
//             x = dfs[b];
//             cout<<x<<"<=x"<<"\n";
//             cout<<a<<"<=a"<<"\n";
//         }
//         else if (x !=  dfs[b] && x >= a)
//         {
//             if (a > dfs[b])
//             {
//                 continue;
//             }
//             a = dfs[b];
//             cout<<x<<"<=x"<<"\n";
//             cout<<a<<"<=a"<<"\n";
//         }
//     }

//     return 0;
// }
#include <iostream>
#include <stdio.h>
using namespace std;

int func(int value, int y, int x, int z, int amount)
{
    if (value == 123)
    {
        /* code */
        x = amount-x ;
        return x;
    }
    else if (value == 234)
    {
        /* code */
        y = amount -y;
        return y;
    }
    else if (value == 345)
    {
        z = amount - z;
        return z;
    }
}

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int value = 0;
    int amount = 0;
    while (true)
    {
        cout << "Enter account number :"<< "\n";
        cin >> value;
        cout<<"Transaction amount for "<<value<<"->"<<"\n";
        cin >> amount;
        cout<<"Current amount :" <<func(value, x, y, z, amount)<<"\n";
        x-=amount;
        y-=amount;
        z -=amount;
        
    }

    return 0;
}