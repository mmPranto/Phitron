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

class myQueue
{
    public:
    Node* head= NULL;
    Node* tail=NULL;
    int sz=0;

    void push(int val)   //O(1)
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
        tail=new_node;
    }

    void pop()               //O(1)
    {
        sz-=1;
        Node* delete_node = head;
        head=head->next;
        delete delete_node;
        if(head==NULL)
        {
            tail=NULL;
        }
    }

    int front()            //O(1)
    {
        return head->val;
    }

    int back()           //O(1)
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        // if(head==NULL)
        // {
        //     return true;
        // }
        // else 
        // {
        //     return false;
        // }

        //or

        return head==NULL;
    }





    

};

int main()
{
    myQueue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    //cout<<q.front()<<" "<<q.back()<<" "<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

     


    return 0;
}