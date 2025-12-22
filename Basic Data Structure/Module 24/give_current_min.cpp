#include<bits/stdc++.h>
using namespace std;
int main()
{

     priority_queue<int,vector<int>,greater<int>> pq;
     int n;
     cin>>n;
     while(n--)
     {
        int a;
        cin>>a;
        pq.push(a);
     }
     int Q;
     cin>>Q;
     while(Q--)
     {
        int q;
        cin>>q;

        if(q==0)
        {
            int val;
            cin>>val;
            pq.push(val);
            cout<<pq.top()<<endl;
        }
        else if(q==1)
        {
            if(pq.empty())
                cout<<"Empty"<<endl;
            else
                cout<<pq.top()<<endl;
        }
        else if(q==2)
        {
            if(!pq.empty())
                pq.pop();
            if(!pq.empty())
                cout<<pq.top()<<endl;
            else
                cout<<"Empty"<<endl;
        }
     }


    return 0;
}