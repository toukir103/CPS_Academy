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
Node* Search(Node *head,int key)
{
    Node *tmp=head;
    while(tmp !=NULL)
    {
        if(key==tmp->val)
        {
            return tmp;
        }
        tmp=tmp->next;
    }
    return NULL;
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

    // Searching

    Node* mySearch=Search(head,30);

    //cout<<mySearch->val<<endl;

    if(mySearch)
    {
        cout<<"Key is Found "<<mySearch->val<<endl;
    }
    else
    {
        cout<<"key is not found";

    }
    return 0;
}