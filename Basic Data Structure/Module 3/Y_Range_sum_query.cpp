#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n,q;
     cin>>n>>q;

     vector<int> v(n+1);
     for(int i=1;i<=n;i++)
     {
        cin>>v[i];
     }

    //  for(int i=0;i<q;i++)
    //  {

    //  }
    //more shortcut
    //pre[Right]-pre[Left-1]  ;prefix sum equation
    vector<long long> pre(n+1);
    pre[1]=v[1];
    for(int i=2;i<=n;i++)  //how to do prefix sum   
    {
        pre[i]=v[i]+pre[i-1];
    }


    while(q--) 
    {
        int l,r;
        cin>>l>>r;
        long long sum=0;
       

        if(l==1)
        {
            sum=pre[r];
        }
        else 
        {
            sum=pre[r]-pre[l-1];
        }

        cout<<sum<<endl;

    }

   


    return 0;
}