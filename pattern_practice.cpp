#include <iostream>
#include <stdio.h>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     while (n--)
//     {
//         cout<<"*";
//     }

//     return 0;
// }

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "x";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

//////////////
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int count = 0;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    cout << count;

    return 0;
}

////////////////
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}
//////////
#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int x = min(n, m);
    int ans = 0;
    for (int i = 1; i <= x; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            ans = i;
        }
    }
    cout << ans << "\n ";

    return 0;
}
//////////////
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int temp = 0;
    temp = a;
    a = b;
    b = temp;

    cout << a << b;

    return 0;
}
