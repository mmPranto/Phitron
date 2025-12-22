#include<bits/stdc++.h>
using namespace std;

class Node   //doubly linked list node
{
    public:
        int val;
        Node* next;
        Node* prev;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};

void delete_from_tail(Node* &head,Node* &tail)
{
    Node* delete_node=tail;
    tail=tail->prev;
    delete delete_node;
    if(tail==NULL)
    {
        head=NULL;
        return;
    }
    tail->next=NULL;

}

void print_forward(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

int main()
{
    


    Node* head= new Node(10);
    //Node* tail=head;
    Node* a= new Node(20);
    Node* tail = new Node(30);

    head->next=a;
    a->prev=head;
    a->next=tail;
    tail->prev=a;

    delete_from_tail(head,tail);
    print_forward(head);

     


    return 0;
}