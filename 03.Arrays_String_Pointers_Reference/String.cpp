#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    string str = "geeksforgeeks";
    int res = str.find("for");
    if (res==string::npos)
    {
        cout<<"found"<<"\n";
    }
    else
    cout<<"at"<<res;
    
    
    return 0;
}
