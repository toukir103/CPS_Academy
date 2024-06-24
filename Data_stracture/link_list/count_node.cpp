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
int count(Node *head)
{
    Node* tmp = head;
    int cnt=0;
    while(tmp != NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
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

    // Count Nodes
    int cnto=count(head);
    cout<<cnto<<endl;

    return 0;
}