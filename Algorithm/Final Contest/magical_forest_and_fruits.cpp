#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n;
     cin>>n;
     int q;
     cin>>q;
     long long a[n+1];
     a[0]=0;
     for(int i=1;i<=n;i++)
     {
        cin>>a[i];
        a[i]=a[i]+a[i-1];
        
     }
    
     while(q--)
     {
        
        int l,r;
        cin>>l>>r;

        long long sum=a[r]-a[l-1];

        cout<<sum<<endl;
     }


    return 0;
}