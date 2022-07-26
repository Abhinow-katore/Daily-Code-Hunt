// #include <bits/stdc++.h>
// #include <stdio.h>
// using namespace std;

// int main(){
//     // Node* head = NULL;
//     // Node* temp = NULL;
//     // temp = node->next;
//     // temp = temp->next;
//     // temp->next = head;
//     // temp->val;
//     // temp->next->val;

//     return 0;
// }
///
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 1;
    int y = 1;
    int z = 0;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        z = x + y;
        x = y;
        y = z;
        // z= x+y;
        cout << z << " ";
    }

    return 0;
}
