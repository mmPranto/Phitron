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

class myStack
{
    public:
       
        Node* head=NULL;
        Node* tail=NULL;
        int sz=0;

        void push(int val)     //O(1)
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

        void pop()            //O(1)
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

        int top()   //O(1)
        {
            return tail->val;
        }

        int size()
        {
            return sz;
        }

        bool empty()   //O(1)
        {
            // if(head == NULL)
            // {
            //     return true;
            // }
            // else
            // {
            //     return false;
            // }

            //or

            return head == NULL; 

        }

};

void check(myStack st,myStack st2,int n,int n2)
{
    
    if(n!=n2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        bool flag=true;
        while(!st.empty())
        {
            if(st.top()!=st2.top())
            {
                flag=false;
            }
            st.pop();
            st2.pop();
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
}

int main()
{
    myStack st,st2;

    //stack input
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    
    int n2;
    cin>>n2;

    for(int i=0;i<n2;i++)
    {
        int x;
        cin>>x;
        st2.push(x);
    }

    check(st,st2,n,n2);

   


    return 0;
}