#include<bits/stdc++.h>
using namespace std;

class Edge
{
    public:
        int a,b;
        long long c;
        Edge(int a,int b,long long c)
        {
            this->a=a;
            this->b=b;
            this->c=c;
        }
};

int n,e;
long long dis[1005];
vector<Edge> edge_list;
bool cycle = false;

void bellman_ford()
{
    for(int i=1;i<n;i++)
    {
        for(auto ed : edge_list)
        {
            int a,b;
            long long c;
            a=ed.a;
            b=ed.b;
            c=ed.c;
            if(dis[a]!=LLONG_MAX && dis[a]+c < dis[b])
                dis[b]=dis[a]+c;
        }
    }

    for(auto ed : edge_list)
    {
        int a,b;
        long long c;
        a=ed.a;
        b=ed.b;
        c=ed.c;
        if(dis[a]!=LLONG_MAX && dis[a]+c < dis[b])
        {
            cycle=true;
            break;
        }
    }
}


int main()
{

     
     cin>>n>>e;
     
     while(e--)
     {
        int a,b;
        long long c;
        cin>>a>>b>>c;
        edge_list.push_back(Edge(a,b,c));

     }

    for(int i=1;i<=n;i++)
    {
        dis[i]=LLONG_MAX;
    }
    int s;
    cin>>s;

    dis[s]=0;
    bellman_ford();

    int t;
    cin>>t;
    int des[t];
    for(int i=0;i<t;i++)
        cin>>des[i];

    

    if(cycle)
        cout<<"Negative Cycle Detected"<<endl;
    else
    {
        for(int i=0;i<t;i++)
        {
            if(dis[des[i]]==LLONG_MAX)
                cout<<"Not Possible"<<endl;
            else
                cout<<dis[des[i]]<<endl;
        }
    }


    return 0;
}