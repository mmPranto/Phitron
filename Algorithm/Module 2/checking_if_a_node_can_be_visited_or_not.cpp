#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src]=true;

    while(!q.empty())
    {
        int par=q.front();
        q.pop();

        

        for(int child : adj_list[par])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=true;
            }
        }
    }
}
int main()
{

     int n,e;
     cin>>n>>e;
     while(e--)
     {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
     }

     memset(adj_list,false,sizeof(adj_list));
     int src,dst;
     cin>>src>>dst;
     bfs(src);

     if(vis[dst])
        cout<<"YES"<<endl;
    else
     cout<<"NO"<<endl;


    return 0;
}

/*
7 5
0 1
1 3
1 4
3 2
4 6
3 5
0
4
*/