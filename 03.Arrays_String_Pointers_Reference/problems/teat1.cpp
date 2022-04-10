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

int func_low(int value, int x,int y,int z,int amount){
 
    if (x <= y && x <= z){
        cout<<"123 "<<"had the lowest bank balance of"<<x<<"\n";
        // cout << x << " is the smallest";
    }
 
    else if (y <= x && y <= z)
        cout<<"234 "<<"had the lowest bank balance of"<<y<<"\n";
        // cout << y << " is the smallest";
 
    else
        cout<<"345 "<<"had the lowest bank balance of"<<z<<"\n";
        // cout << z << " is the smallest";
}

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int value = 0;
    int amount = 0;
    int i = 0;
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
        // i++;
    cout<<func_low(value, x,y,z,amount)<<" update"<<"\n";
        
    }
    

    return 0;
}
/////////
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        arr[i+1] = arr[i] +arr[i+1];
        ans = arr[n];

    }
    cout<<ans<<" ";
    
    
    
    return 0;
}