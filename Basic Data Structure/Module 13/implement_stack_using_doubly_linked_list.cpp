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

int main()
{
    myStack st;

    //stack input
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    //stack output
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

   


    return 0;
}