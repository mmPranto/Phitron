#include<bits/stdc++.h>
using namespace std;
int par[100005];
int group_size[100005];

int find(int node)
{
    if(par[node]==-1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1,int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if(group_size[leader1] >= group_size[leader2])
    {
        par[leader2]=leader1;
        group_size[leader1]+=group_size[leader2];
    }
    else
    {
        par[leader1]=leader2;
        group_size[leader2]+=group_size[leader1];
    }
}

int main()
{
    memset(par,-1,sizeof(par));
   // memset(group_size,1,sizeof(group_size));
    for(int i = 0; i < 1005; i++) 
    {
        group_size[i] = 1;
    }

    int n,e;
    cin>>n>>e;
    bool cycle = false;
    int cnt=0;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        int leader_A =find(a);
        int leader_B = find(b);

        if(leader_A == leader_B)
        {
            cycle = true;
            cnt++;
        }
        else
        {
            dsu_union(a,b);
        }
    }

    cout<<cnt;

     
     


    return 0;
}

