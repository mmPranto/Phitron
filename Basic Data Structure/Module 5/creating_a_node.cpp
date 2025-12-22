#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next_node;    //point the next NODE address

};

int main()
{
    Node a,b,c;
    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.next_node = &b;
    b.next_node = &c;
    c.next_node = NULL;

    //cout<<a.val<<" "<<b.val<<" "<<c.val<<endl;

    cout<<a.val<<endl;
    //cout<<(*a.next_node).val<<endl;
    cout<<a.next_node->val<<endl;
    cout<<a.next_node->next_node->val<<endl;

     


    return 0;
}