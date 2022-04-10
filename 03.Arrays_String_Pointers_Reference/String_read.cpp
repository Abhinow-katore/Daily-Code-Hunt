#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string name = "abhinav";
    // cin>>name;
    getline(cin, name,'%');
    cout<<name;


    for (int i = 0; i < name.length(); i++)
    {
        cout<<name[i];
    }
    







    return 0;
}
