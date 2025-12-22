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

void insert_at_tail(Node* &head,Node* &tail,int val)
{
    
    Node* new_node = new Node(val);

    if(head==NULL)
    {
        head=new_node;
        tail=new_node;
        return;
    }

    tail->next=new_node;
    new_node->prev=tail;
    tail=new_node;
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
    Node* head=NULL;
    Node* tail=NULL;

    // Node* head= new Node(10);
    // Node* a= new Node(20);
    // Node* tail = new Node(30);

    // head->next=a;
    // a->prev=head;
    
    // a->next=tail;
    // tail->prev=a;

    insert_at_tail(head,tail,500);
    insert_at_tail(head,tail,600);
    print_forward(head);

     


    return 0;
}