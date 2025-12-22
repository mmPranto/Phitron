#include<bits/stdc++.h>
using namespace std;
int main()
{

     int t;
     cin>>t;

     while(t--)
     {
        int n;
        cin>>n;
        int flag=0;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0,j=i+1;i<n-1;i++,j++)
        {
            if(a[i]>a[j])
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
     }



    return 0;
}