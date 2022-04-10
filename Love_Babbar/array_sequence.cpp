#include<iostream>
using namespace std;
int main()
{
int x,i,k,j;
cout<<"enter the number of array:";
cin >> x;
int arr[x];
for (i = 0; i < x; i++)
{
    /* code */
    cout<<"enter the "<< i+1 <<"th number: ";
    cin >> arr[i];
}
for ( k = 0; k < 3; k++)
{
    for ( j = 0; j < x; j++)
    {
        if(arr[j]==k)
        {
            cout<<arr[j];
        }
    }
}

return 0;

}