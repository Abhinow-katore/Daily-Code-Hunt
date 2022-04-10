#include <iostream>
#include <stdio.h>
using namespace std;
struct student
{
    int rollno;
    string name;
    string address;
};


int main(){
    student var = {101, "abhinav", "nagpur"}; //////stucture called
    cout<<var.rollno<<"\n";///var.informaion
    cout<<var.name<<"\n"; ///var.informaion
    cout<<var.address<<"\n"; ///var.informaion

    
    return 0;
}