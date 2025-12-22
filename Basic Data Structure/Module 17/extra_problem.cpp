#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* left;
        Node* right;

    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }

};

void pre_order(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->val<<" ";   //root
    pre_order(root->left);    //left
    pre_order(root->right);  //right;
}

void in_order(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    in_order(root->left);    //left
    cout<<root->val<<" ";   //root
    in_order(root->right);  //right;
}

void post_order(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    post_order(root->left);    //left
    post_order(root->right);  //right;
    cout<<root->val<<" ";   //root
   
}

int main()
{
    Node* root=new Node(1);
    Node* a=new Node(7);
    Node* b=new Node(9);
    Node* c=new Node(2);
    Node* d=new Node(6);
    Node* e=new Node(9);
    Node* f=new Node(5);
    Node* g=new Node(11);
    Node* h=new Node(5);


    //connection
    root->left=a;
    root->right=b;

    a->left=c;
    a->right=d;

    d->left=f;
    d->right=g;

    b->right=e;
    e->left=h;


    cout<<"Pre-Order : ";
    pre_order(root);
    cout<<endl;

    cout<<"In-Order : ";
    in_order(root);
    cout<<endl;

    cout<<"Post-Order : ";
    post_order(root);
    cout<<endl;

    return 0;
}