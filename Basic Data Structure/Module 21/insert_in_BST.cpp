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
        root=NULL;
    else
        root = new Node(val);

    queue<Node*> q;

    if(root)
        q.push(root);

    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

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

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }

    return root;
}

void insert(Node* &root,int val)
{
    if(root==NULL)
    {
        root = new Node(val);
        return;
    }

    
    if(root->val > val)
    {
        if(root->left==NULL)
            root->left = new Node(val);
        else
            insert(root->left,val);
    }
    else
    {
        if(root->right==NULL)
            root->right = new Node(val);
        else
            insert(root->right,val);
    }
}

void level_order(Node* root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}

int main()
{
    //10 6 23 -1 9 19 29 7 -1 12 -1 -1 35 -1 -1 -1 -1 -1 -1
    Node* root=input_tree();
    int val;
    cin>>val;
    insert(root,val);
    insert(root,11);
    level_order(root);
     


    return 0;
}