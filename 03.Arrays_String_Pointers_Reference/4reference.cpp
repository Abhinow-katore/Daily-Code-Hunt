#include <iostream>
#include <stdio.h>
using namespace std;

// void swap(int x, int y ){
//     int temp = x;
//     x=y;
//     y =temp;
//     cout<<x<<" "<<y; //15 10

// }
// int main(){
//     int x = 10, y= 15;
//     swap(x,y);
//     cout<<x<<y; // 10 15
//     return 0;
// }
//////////////////////
void swap(int &x, int &y ){
    int temp = x;
    x=y;
    y =temp;
    cout<<x<<" "<<y<<"\n"; //15 10

}
int main(){
    int x = 10, y= 15;
    swap(x,y);
    cout<<x<<" "<<y; // 15 15
    return 0;
}

//////////////////
// int swap(int x, int y ){
//     int temp = x;
//     x=y;
//     y =temp;
//     // cout<<x<<" "<<y; //15 10
//     return x,y;

// }
// int main(){
//     int x = 10, y= 15;
//     swap(x,y);
//     cout<<x<<y; // 10 15
//     return 0;
// }