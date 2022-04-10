#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int p = 0; p < test; p++)
    {
        int k1, k2;
        int y1, y2, z1, z2;
        int flag = 0;
        int droped = 0;
        cin >> k1 >> k2;
        cin >> y1 >> y2;
        cin >> z1 >> z2;
        if (k1 == 1 || k1 == 8 || k2 == 1 || k2 == 8)
        {
            // cout<<"PASS1"<<"\n";
            if (k1 == 1 || k2 == 1)
            {
                // cout<<"PASS3"<<"\n";
                if (y1 == 2 && z1 != 2 && z2 != 2 && y1 != z1 && z2 != k2 && z2 != k2 + 1 && z2 != k2 - 1 && y2 != k2 && y2 != k2 - 1 && y2 != k2 + 1)
                {
                    // cout<<"PASS4"<<"\n";
                    cout << "YES"
                         << "\n";
                    flag = 1;
                }
                // left---->
                if ((y2 == 2 && z1 != 2 && z2 != 2 && y1 != z1 && z1 != k1 && z1 != k1 + 1 && z1 != k1 - 1 && y1 != k1 && y1 != k1 - 1 && y1 != k1 + 1))
                {
                    // cout<<"PASS4"<<"\n";
                    cout << "YES"
                         << "\n";
                    flag = 1;
                }
                if ((z1 == 2 && y1 != 2 && y2 != 2 && y1 != z1))
                {
                    // cout<<"PASS4"<<"\n";
                    cout << "YES"
                         << "\n";
                    flag = 1;
                }
                if ((z2 == 2 && y1 != 2 && y2 != 2 && y1 != z1))
                {
                    // cout<<"PASS4"<<"\n";
                    cout << "YES"
                         << "\n";
                    flag = 1;
                }

                if (flag != 1)
                {
                    cout << "NO"
                         << "\n";
                    droped = 1;
                }
            }
            ///////////////
            if (k1 == 8 || k2 == 8)
            {
                // cout<<"PASS3"<<"\n";
                if (y1 == 7 && z1 != 7 && z2 != 7 && y1 != z1 && z2 != k2 && z2 != k2 + 1 && z2 != k2 - 1 && y2 != k2 && y2 != k2 - 1 && y2 != k2 + 1)
                {
                    // cout<<"PASS4"<<"\n";
                    cout << "YES"
                         << "\n";
                    flag = 1;
                }
                if (y2 == 7 && z1 != 7 && z2 != 7 && y1 != z1 && z1 != k1 && z1 != k1 + 1 && z1 != k1 - 1 && y1 != k1 && y1 != k1 - 1 && y1 != k1 + 1)
                {
                    // cout<<"PASS4"<<"\n";
                    cout << "YES"
                         << "\n";
                    flag = 1;
                }
                if ((z1 == 7 && y1 != 7 && y2 != 7 && y1 != z1))
                {
                    // cout<<"PASS4"<<"\n";
                    cout << "YES"
                         << "\n";
                    flag = 1;
                }
                if ((z2 == 7 && y1 != 7 && y2 != 7 && y1 != z1))
                {
                    // cout<<"PASS4"<<"\n";
                    cout << "YES"
                         << "\n";
                    flag = 1;
                }

                if (flag != 1 && droped < 1)
                {
                    cout << "NO"
                         << "\n";
                }
            }
            // cout<<"PASS1"<<"\n";
            // if (k2 == 1 && k1 != 8)
            // {
            //     // cout<<"PASS2"<<"\n";
            //     for (int i = 1; i <= 8; i++)
            //     {
            //         // cout<<"PASS3"<<"\n";
            //         if (y2 == 2 || z2 == 2)
            //         {
            //             // cout<<"PASS4"<<"\n";
            //             if (y1 != 2 && z1 != 2)
            //             {
            //                 cout << "YErrS";
            //                 break;
            //             }
            //         }
            //         if (y2 != 2 || z2 != 2)
            //         {
            //             // cout<<"PASS5"<<"\n";
            //             count = count + 1;
            //             continue;
            //         }
            //     }
            //     if (count == 8 && k1 != 1)
            //     {
            //         cout << "NO";
            //     }
            // }
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}