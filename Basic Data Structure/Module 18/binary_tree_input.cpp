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

Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1)
        root = NULL;
    else
        root = new Node(val);
    
    queue<Node*> q;

    if(root)     //if(root!=NULL)
        q.push(root);

    while(!q.empty())
    {
        //1. ber kore ana
        Node* f=q.front();
        q.pop();

        //2. oi node ke niye kaj
        int l,r;
        cin>>l>>r;
        Node* my_left;
        Node* my_right;

        if(l==-1)           
            my_left=NULL;
        else
            my_left=new Node(l);

        if(r==-1)
            my_right=NULL;
        else
            my_right=new Node(r);


        f->left=my_left;
        f->right=my_right;


        //3.  childrenn push kora
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }

    return root;
}

void level_order(Node* root)
{
    if(root==NULL)
    {
        cout<<"No Tree";
        return;
    }
    
     queue<Node*> q;
     q.push(root);
     while(!q.empty())
     {
        //1.    ber kora
        Node* f = q.front();
        q.pop();

        //2.    oi node k niye kaj kora
        cout<<f->val<<" ";

        //3.    children push kora
        if(f->left)     //(f->left!=NULL)
            q.push(f->left);

        if(f->right)    //(f->right!=NULL)
            q.push(f->right);
     }
}

int main()
{
    Node* root=input_tree();

    level_order(root);
     


    return 0;
}