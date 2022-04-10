#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string str;
    cin >>str;

    string str_new = "";

    for (int i = str.length() -1; i>=0; i--)
    {
        str_new = str_new +str[i];


    }
    if(str==str_new){   
        cout<<"1";
    }
    if(str!=str_new){
        cout<<"0";
    }



    return 0;
}
