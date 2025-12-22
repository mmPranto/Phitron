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
        root=new Node(val);
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

int max_height(Node* root)
{
    if(root==NULL)
        return -1;
    if(root->left==NULL && root->right==NULL)
        return 0;
    
    int l=max_height(root->left);
    int r=max_height(root->right);
    return max(l,r)+1;
}



void level_order_print(Node* root,int x,int h)
{
    if(root==NULL)
    {
        cout<<"Invalid";
        return;
    }

    if(x>h)
    {
        cout<<"Invalid";
        return;
    }
    queue<Node*> q;
    q.push(root);
    int current=0;

    while(!q.empty())
    {
        int size=q.size();
        if(current==x)
        {
            for(int i=0;i<size;i++)
            {
                Node* f=q.front();
                q.pop();
                cout<<f->val<<" ";
            }
            cout<<endl;
            return;
        }

        for(int i=0;i<size;i++)
        {
            Node* f = q.front();
            q.pop();
            if(f->left)
                q.push(f->left);
            if(f->right)
                q.push(f->right);
        }
        current+=1;
    }

    //cout<<"Invalid";
}

int main()
{
    Node* root = input_tree();
    int x;
    cin>>x;
    int h = max_height(root);
    level_order_print(root,x,h);
    


     


    return 0;
}