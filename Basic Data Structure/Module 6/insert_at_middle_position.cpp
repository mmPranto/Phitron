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

void insert_at_any_position(Node* &head,int val)
{

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
}

int main()
{
    Node* head = new Node(10);
    Node* 

     


    return 0;
}