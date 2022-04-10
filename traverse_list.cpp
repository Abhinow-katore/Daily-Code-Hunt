#include <bits\stdc++.h>
#include <stdio.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void print(Node *var)
{
    Node *curr = var;
    while (curr != NULL)
    {
        cout << (curr->data);
        curr = curr->next;
    }
}

int main()
{
    Node *var = new Node(10);
    var->next = new Node(20);
    var->next->next = new Node(30);
    var->next->next -> next = new Node(40);
    print(var);

    return 0;
}