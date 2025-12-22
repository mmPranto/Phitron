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
    Node* new_node=new Node(val);
    if(head==NULL)
    {
        head=new_node;
        tail=new_node;
        return;

    }
    tail->next=new_node;
    tail=new_node;
}



void diff_of_min_max(Node* &head)
{
    int max=INT_MIN;
    int min=INT_MAX;
    Node* temp=head;

    if(head->next==NULL)
    {
        cout<<"0";
    }
    else
    {
        while(temp!=NULL)
        {
            if((temp->val)>max)
            {
                max=temp->val;
            }
            if((temp->val)<min)
            {
                min=temp->val;
            }
            temp=temp->next;
        }
        int diff=max-min;
        cout<<diff;
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

    diff_of_min_max(head);



    return 0;
}