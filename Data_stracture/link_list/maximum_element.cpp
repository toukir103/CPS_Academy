#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void printLinkedList(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
    cout << endl;
}

int Max(Node *head)
{
    Node *tmp = head;
    int max = INT_MIN;
    while(tmp != NULL)
    {
        if(tmp->val > max)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    return max;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // Print the linked list using the function
    printLinkedList(head);

    // Find maximum element in linked list
    int maximum = Max(head);
    cout << "Maximum element in linked list: " << maximum << endl;

    return 0;
}