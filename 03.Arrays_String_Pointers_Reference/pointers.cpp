#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int x =   10;
    int *p = &x;
    cout<<x<<"\n";
    cout<<&x<<"\n";
    cout<<*p<<"\n";
    cout<<p<<"\n";
    
    return 0;
}

//output:
// 10
// 0x61ff08
// 10
// 0x61ff08
//----------------------------------------
///addition using pointer
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int x =   10;
    int *p = &x;

    cout<<*p<<"\n";
    x =x +30;

    cout<<*p<<"\n";
    *p = *p +40;

    cout<<x<<"\n";
    
    return 0;
}
//output:
// 10
// 40
// 80

//----------------------------------------

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int *p1 ;
    double *p2;
    string *p3;


    cout<<sizeof(p1)<<"\n";
    cout<<sizeof(p2)<<"\n";
    cout<<sizeof(p3)<<"\n";
    
    return 0;
}
