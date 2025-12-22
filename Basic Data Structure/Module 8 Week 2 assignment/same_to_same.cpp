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

void same_to_same(Node* head1,Node* head2,int count1,int count2)
{
    Node* temp1 = head1;
    Node* temp2 = head2;
    if(count1!=count2)
    {
        cout<<"NO";
    }
    else
    {
        int check=0;
        while(temp1!=NULL)
        {
            if((temp1->val)!=(temp2->val))
            {
                check=-1;
                break;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if(check==-1)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }
}



int main()
{
    Node* head1=NULL;
    Node* tail1=NULL;
    int count1=0;
    while(true)
    {
        int val1;
        cin>>val1;
        if(val1==-1)
        {
            break;
        }
        insert_at_tail(head1,tail1,val1);
        count1+=1;
    }

    Node* head2=NULL;
    Node* tail2=NULL;
    int count2=0;
    while(true)
    {
        int val2;
        cin>>val2;
        if(val2==-1)
        {
            break;
        }
        insert_at_tail(head2,tail2,val2);
        count2+=1;
    }

    same_to_same(head1,head2,count1,count2);



    return 0;
}