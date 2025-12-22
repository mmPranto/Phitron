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

vector<int> a;
int n;
void leaf_node(Node* root)
{
    if(root==NULL)
        return;
    if(root->left==NULL && root->right==NULL)
    {
        a.push_back(root->val);
        n+=1;
        return;
    }
    leaf_node(root->left);
    leaf_node(root->right);
}

void print()
{
    sort(a.begin(),a.end(),greater<int>());
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}



int main()
{
    
    n=0;
    
     Node* root=input_tree();
     leaf_node(root);
     print();
    




    return 0;
}