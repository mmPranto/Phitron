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

class myQueue
{
    public:
    Node* head= NULL;
    Node* tail=NULL;
    int sz=0;

    void push(int val)   
    {
        sz+=1;
        Node* new_node= new Node(val);
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

    void pop()               
    {
        sz-=1;
        Node* delete_node = head;
        head=head->next;
        delete delete_node;
        if(head==NULL)
        {
            tail=NULL;
            return;
        }
        head->prev=NULL;
    }

    int front()            
    {
        return head->val;
    }

    int back()           
    {
        return tail->val;
    }

    int size()  
    {
        return sz;
    }

};

class myStack
{
    public:
       
        Node* head=NULL;
        Node* tail=NULL;
        int sz=0;

        void push(int val)    
        {
            sz++;
            Node* new_node=new Node(val);
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

        void pop()           
        {
            sz--;
            Node* delete_node=tail;
            tail=tail->prev;
            delete delete_node;
            if(tail==NULL)
            {
                head=NULL;
                return;
            }
            tail->next=NULL;
            
        }

        int top()   
        {
            return tail->val;
        }

        int size()
        {
            return sz;
        }

        bool empty()   
        {
            return head == NULL; 
        }

};

int main()
{
    myStack st;
    myQueue q;
    int n,m;

    cin>>n>>m;

    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    for(int i=1;i<=m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }

    if(st.size()!=q.size())
    {
        cout<<"NO";
    }
    else
    {
        bool flag=true;
        while(!st.empty())
        {
            if(st.top()!=q.front())
            {
                flag=false;
                break;
            }
            st.pop();
            q.pop();
        }
        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

     


    return 0;
}