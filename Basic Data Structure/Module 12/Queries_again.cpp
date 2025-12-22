#include<bits/stdc++.h>
using namespace std;

class Node
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

void print_left_to_right(Node* head)
{

    Node* temp=head;
    cout<<"L -> ";
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void print_right_to_left(Node* tail)
{
    Node* temp=tail;
    cout<<"R -> ";
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}


void done_this(Node* &head,Node* &tail,int x,int v,int &count)
{
    Node* new_node=new Node(v);
    
    if(x<=count)
    {
        if(head==NULL)
        {
            head=new_node;
            tail=new_node;
            
        }
        else if(x==0)
        {
            head->prev=new_node;
            new_node->next=head;
            head=new_node;
        }
        else if(x==count)
        {
            tail->next=new_node;
            new_node->prev=tail;
            tail=new_node;
        }
        else
        {
            Node* temp=head;
            for(int i=1;i<x;i++)
            {
                temp=temp->next;
            }
            new_node->next=temp->next;
            temp->next->prev=new_node;
            new_node->prev=temp;
            temp->next=new_node;
        }
        count+=1;

         print_left_to_right(head);
         print_right_to_left(tail);
    }
    else
    {
        cout<<"Invalid"<<endl;
    }
}




int main()
{
    int q;
    cin>>q;

    Node* head=NULL;
    Node* tail=NULL;
    int count=0;

    while(q--)
    {
        int x,v;
        cin>>x>>v;

        done_this(head,tail,x,v,count);
        
       


    }


    return 0;
}