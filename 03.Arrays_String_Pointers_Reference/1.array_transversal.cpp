////////////method 1
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int arr[] = { 10,20,30,40,45};
    int n  = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
/////////method 2
////////////method 1
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int arr[] = { 10,20,30,40,45};
    int n  = sizeof(arr)/sizeof(arr[0]);
    for (int x: arr)
    {
        /* code */
        cout<<x <<" ";
    }
    
    return 0;
}
/////////