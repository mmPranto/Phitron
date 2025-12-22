#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        string txt;
        Node* next;
        Node* prev;

    Node(string txt)
    {
        this->txt=txt;
        this->next=NULL;
        this->prev=NULL;
    }

};

void insert_at_tail(Node* &head,Node* &tail,string txt)
{
    
    Node* new_node = new Node(txt);

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


void find(Node* head,Node* &temp,string address)
{
    
    bool flag=false;
    Node* current=head;
    while(current!=NULL)
    {
        if(current->txt==address)
        {
            flag=true;
            temp=current;
            break;
        }
        current=current->next;
    }

    if(flag==true)
    {
        cout<<temp->txt<<endl;;
    }
    else
    {
        cout<<"Not Available"<<endl;
    }

}

void next(Node* &temp)
{
       
    if(temp->next==NULL)
    {
        cout<<"Not Available"<<endl;
    }
    else
    {
        temp=temp->next;
        cout<<temp->txt<<endl;
    }
    
}

void prev(Node* &temp)
{
    
    if(temp->prev==NULL)
    {
        cout<<"Not Available"<<endl;
    }
    else
    {
        temp=temp->prev;
        cout<<temp->txt<<endl;
    }
}


int main()
{
    Node* head=NULL;
   
    Node* tail =NULL;

    string txt;
    while(true)
    {
        cin>>txt;
        if(txt=="end")
        {
            break;
        }
        insert_at_tail(head,tail,txt);

    }
    

    int q;
    cin>>q;
    string address;
    Node* temp=head;

    while(q--)
    {
        cin>>address;
        if(address=="visit")
        {
            cin>>address;
            find(head,temp,address);

        }
        else if(address=="next")
        {
            next(temp);
        }
        else if(address=="prev")
        {
            prev(temp);
        }

    }

     


    return 0;
}