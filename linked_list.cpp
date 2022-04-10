#include <bits/stdc++.h>
using namespace std;

struct linked_list
{
    int a;
    linked_list *next;
    linked_list(int x)
    {
        a = x;
        next = NULL; /// ew
    }

    // int data;
    // linked_list *next;
    // linked_list(int x){
    //     data = x;
    //     next = NULL;
    // }
};

// int main()
// {
//     linked_list *var = new linked_list(10);
//     linked_list *var2 = new linked_list(20);
//     linked_list *var3 = new linked_list(30);

//     var->next = var2;
//     var2->next = var3;

//     return 0;
// }

// ''' short Implementation ''' //best
int main()
{
    linked_list *var = new linked_list(10);
    var->next = new linked_list(20);

    var->next->next = new linked_list(20);

    return 0;
}
