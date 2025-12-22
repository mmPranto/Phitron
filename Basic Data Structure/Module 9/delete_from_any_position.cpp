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

void delete_from_any_position(Node* head,int index)
{
    Node* temp=head;
    for(int i=1;i<index;i++)
    {
        temp=temp->next;
    }
    Node* delete_node=temp->next;
    temp->next = delete_node->next;
    delete_node->next->prev=temp;
    delete delete_node;
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
    Node* b=new Node(30);
    Node* tail = new Node(40);

    head->next=a;
    a->prev=head;

    a->next=b;
    b->prev=a;

    b->next=tail;
    tail->prev=b;

    //delete_from_tail(head,tail);
    delete_from_any_position(head,1);
    print_forward(head);

     


    return 0;
}
