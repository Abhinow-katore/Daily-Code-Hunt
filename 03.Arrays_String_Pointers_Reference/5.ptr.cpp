////////IMPORTANT TO ptring the pointer always using "&variabke"
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    // int n;
    // cin>>n;
    int arr[] = {10, 20, 30, 40};
    // for (int i = 0; i < n; i++)
    // {
    int *ptr = arr;
    int *ptr1 = ptr + 1;
    // cout << *ptr << "\n";
    int x;
    cin >> x;
    ptr = ptr + x;
    cout << *ptr;
    cout << *ptr1;

    cout << (ptr - ptr1);
    // }

    return 0;
}

//////example
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int x, *y;
    cin >> x;
    y = &x;
    *y = *y + 10;


    cout << x << " " << &x << " " << y << " " << *y << " " << &y << "\n";
    cout << *(&x) << *(&y);

    return 0;
}
///////////////
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << *(&x);

    return 0;
}
///////////////
#include <iostream>
#include <stdio.h>
using namespace std;
int fun(int *a)
{
    return *a;
}

int main()
{
    int a;
    cin >> a;
    cout << fun(&a);
    return 0;
}
//////////
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    int *x = arr;
    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        if (*x < *(x + i))
        {
            *x = *(x + i);
            // ans = *(x+1);
        }
    }
    cout << arr[0];

    return 0;
}


/////////////////////////
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int x, *y;
    cin >> x;
    y = &x;
    // *y = *y + 10;
    
    

    // cout << x << " " << &x << " " << y << " " << *y << " " << &y << "\n";
    // cout << *(&x) << *(&y);

    return 0;
}