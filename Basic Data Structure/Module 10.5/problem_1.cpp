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

void compare(Node* head_1,Node* head_2)
{
    Node* temp_1=head_1;
    Node* temp_2=head_2;
    bool flag=true;
    while(temp_1!=NULL && temp_2!=NULL)
    {
        if(temp_1->val!=temp_2->val)
        {
            flag=false;
            break;
        }
        temp_1=temp_1->next;
        temp_2=temp_2->next;
    }

    if(flag==false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        Node* head_1=NULL;
   
        Node* tail_1 =NULL;

        int val_1;
        int count_1=0;
        while(true)
        {
            cin>>val_1;
            if(val_1==-1)
            {
                break;
            }
            insert_at_tail(head_1,tail_1,val_1);
            count_1+=1;

        }

        Node* head_2 =NULL;
        Node* tail_2 = NULL;
        int val_2;
        int count_2=0;

        while(true)
        {
            cin>>val_2;
            if(val_2==-1)
            {
                break;
            }
            insert_at_tail(head_2,tail_2,val_2);
            count_2+=1;
        }

        if(count_1==count_2)
        {
            compare(head_1,head_2);
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }


  
    


     


    return 0;
}