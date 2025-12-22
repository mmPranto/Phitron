#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n,e;
     cin>>n>>e;

     vector<int> adj_list[n];    

     while(e--)
     {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);  
     }

     int q;
     cin>>q;
     
     while(q--)
     {
        int x;
        cin>>x;
        vector<int> ans;
        int ct=0;
        for(int y : adj_list[x])
        {
            ans.push_back(y);
            ct++;
        }
       if(ct==0)
       {
            cout<<"-1";
       }
       else
       {
            sort(ans.begin(),ans.end(),greater<int>());
            for(int z : ans)
            {
                cout<<z<<" ";
            }
       }
        cout<<endl;
     }

   


    return 0;
}