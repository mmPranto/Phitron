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
    Node* new_node = new Node(val);
    if(head==NULL)
    {
        head=new_node;
        tail=new_node;
        return;
    }
    tail->next=new_node;
    tail=new_node;
}

void search(Node *head,int x)
{
    Node* temp=head;
    int count=0;
    int flag=0;
    while(temp!=NULL)
    {
        count+=1;
        if((temp->val)==x)
        {
            flag=-1;
            break;
        }
        temp=temp->next;
    }
    if(flag==-1)
    {
        cout<<count-1<<endl;
    }
    else if(flag==0)
    {
        cout<<"-1"<<endl;
    }

}



int main()
{
    int t;
    cin>>t;
    while(t--)
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

        int x;
        cin>>x;

        search(head,x);


    }

     


    return 0;
}