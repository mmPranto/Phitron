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

void insert(Node* &head,Node* &tail,int x,int val,int &count)
{
    if(x==0)
    {
        Node* new_node=new Node(val);
        if(head==NULL)
        {
            head=new_node;
            tail=new_node;
            count+=1;
            //cout<<"aha uhu"<<endl;
            //cout<<"X="<<x<<" , Count : "<<count<<endl;
            return;
        }
        new_node->next=head;
        head=new_node;
        count+=1;
    }
    else if(x==1)
    {
        Node* new_node=new Node(val);
        if(head==NULL)
        {
            head=new_node;
            tail=new_node;
            count+=1;
            
            return;
        }
        tail->next=new_node;
        tail=new_node;
        count+=1;
        //cout<<"Why not?"<<endl;
    }
    else if(x==2)
    {
        if(count-1<val)
        {
            return;
        }
        else if(count-1==val)
        {
            if(val==0)
            {
              
                Node* delete_node=head;
                head=NULL;
                tail==NULL;
                delete delete_node;
                count-=1;
           
            }
            else if(val==1)
            {
                
                Node* delete_node;
                tail=head;
                delete_node=head->next;
                head->next=NULL;
                tail->next=NULL;
                delete delete_node;
                count-=1;
            }
            else if(val>1)
            {
                Node* temp=head;
                Node* delete_node;
                while(temp->next!=tail)
                {
                    temp=temp->next;

                }
                delete_node=tail;
                tail=temp;
                tail->next=NULL;
                delete delete_node;
                count-=1;
            }
        // count-=1;
        }
        else if(count-1>val)
        {
            if(val==0)
            {
              
                Node* delete_node=head;
                head=head->next;
                delete delete_node;
                count-=1;
           
            }
            else if(val==1)
            {
                
                Node* temp=head;
                Node* delete_node;
                delete_node=temp->next;
                head->next=delete_node->next;
                delete delete_node;
                count-=1;
                
                
            }
            else if(val>1)
            {
                Node* temp=head;
                Node* delete_node;
                for(int i=1;i<val;i++)
                {
                    temp=temp->next;
                }
                delete_node=temp->next;
                temp->next=delete_node->next;
                delete delete_node;
                count-=1;
            }
        ///count-=1;
        }

    }
    //cout<<"Count : "<<count-1<<endl;
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
    cout<<endl;
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
        
        int x,val;
        cin>>x>>val;
        insert(head,tail,x,val,count);
        print_linked_list(head);

    }
    


     


    return 0;
}