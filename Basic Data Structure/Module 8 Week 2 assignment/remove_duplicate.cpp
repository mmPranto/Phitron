#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }

};

void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* new_node= new Node(val);
    if(head==NULL)
    {
        head=new_node;
        tail=new_node;
        return;
    }
    tail->next=new_node;
    tail=new_node;
}



void print_linked_list(Node* head)
{
    Node* temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}



void remove_duplicate(Node* &head) 
{
    Node* cur=head;
   
    while(cur!=NULL)
    {
        Node* prev=cur;
        Node* front=cur->next;
        while(front!=NULL)
        {
            if(cur->val==front->val)
            {
                prev->next=front->next;
                delete front;
                front=prev->next;
            }
            else
            {
                prev=front;
                front=front->next;
            }
        }
        cur=cur->next;
    }
}




int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

    remove_duplicate(head);
    
    print_linked_list(head);


     


    return 0;
}