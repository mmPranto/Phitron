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

void insert_at_head(Node* &head,Node* &tail,int val)
{
    Node* new_node = new Node(val);
    if(head==NULL)
    {
        head=new_node;
        tail=new_node;
        return ;
    }
    new_node->next=head;
    head->prev=new_node; 
    head=new_node;

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

void print_backward(Node* tail)
{
    Node* temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
}

int main()
{
    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* tail = new Node(30);

    head->next=a;
    a->prev=head;
    
    a->next=tail;
    tail->prev=a;

    print_forward(head);
    cout<<endl;
    print_backward(tail);
    insert_at_head(head,tail,100);
    insert_at_head(head,tail,200);
    cout<<endl;
    print_forward(head);
     


    return 0;
}