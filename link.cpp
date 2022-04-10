#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

struct Node
{
    int data;
    Node *next; // star used
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head)
{
    Node *curr = head; // star used
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    // if (head == NULL)
    // {
    //     return;
    // }
    // cout<<head->data;
    // printlist(head ->next);
}

int main()
{
    Node *head = new Node(10); // star used
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printlist(head);

    return 0;
}