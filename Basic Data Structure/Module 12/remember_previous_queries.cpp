#include<bits/stdc++.h>
using namespace std;
int main()
{

     int q;
     cin>>q;
     list<int> l;
    

     while(q--)
     {
        int x,v;
        cin>>x>>v;

        if(x==0)
        {
            l.push_front(v);
            
            
        }
        else if(x==1)
        {
            l.push_back(v);
        }
        else if(x==2)
        {
            if(l.size()>v)
            {
                l.erase(next(l.begin(),v));
                
            }
        }

        cout<<"L -> ";
        for(int val : l)
        {
            cout<<val<<" ";
        }
        cout<<endl;
        l.reverse();
        cout<<"R -> ";
        for(int val : l)
        {
            cout<<val<<" ";
        }
        cout<<endl;
        l.reverse();

     }


    return 0;
}