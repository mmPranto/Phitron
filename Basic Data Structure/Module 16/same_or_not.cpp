#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n,m;
     cin>>n>>m;

     stack<int> A;
     queue<int> B;

     for(int i=1;i<=n;i++)
     {
        int x;
        cin>>x;
        A.push(x);
     }
     for(int j=1;j<=m;j++)
     {
        int x;
        cin>>x;
        B.push(x);
     }

     if(n!=m)
     {
        cout<<"NO"<<endl;
     }
     else
     {
        bool flag=true;
        while(!A.empty())
        {
            if(A.top()!=B.front())
            {
                flag=false;
                break;
            }
            A.pop();
            B.pop();
        }
        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
     }


    return 0;
}