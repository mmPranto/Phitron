#include<bits/stdc++.h>
using namespace std;
int main()
{

     stack<int> st;
     int n;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
        int x;
        cin>>x;
        st.push(x);
     }

     queue<int> q;
     int m;
     cin>>m;

     for(int i=1;i<=m;i++)
     {
        int y;
        cin>>y;
        q.push(y);
     }
     if(n!=m)
     {
        cout<<"NO"<<endl;
     }
     else
     {
        bool flag=true;
        while(!st.empty())
        {
            if(st.top()!=q.front())
            {
                flag=false;
                break;
            }
            st.pop();
            q.pop();
        }
        if(flag==true)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
     }


    return 0;
}