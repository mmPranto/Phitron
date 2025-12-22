#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;
int ct;
vector<int>v;

bool valid(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    else
        return true;
        
}

void dfs(int si,int sj)
{
    //cout<<si<<" "<<sj<<endl;
    vis[si][sj]=true;
    ct++;
    for(int i=0;i<4;i++)
    {
        int ci,cj;
        ci=si+d[i].first;
        cj=sj+d[i].second;
        if(valid(ci,cj)==true && !vis[ci][cj] && grid[ci][cj]=='.')
            dfs(ci,cj);
    }

}
int main()
{

     
     cin>>n>>m;

     for(int i=0;i<n;i++)
     {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
     }

     memset(vis,false,sizeof(vis));
     //int count=0;
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j] && grid[i][j]=='.')
            {
                ct=0;
                dfs(i,j);
                v.push_back(ct);
            }
        }
     }
     if(v.size()==0)
        cout<<"0"<<endl;
    else
    {
        sort(v.begin(),v.end());
        for(int x:v)
        {
            cout<<x<<" ";
        }
     
    }
     


    return 0;
}
