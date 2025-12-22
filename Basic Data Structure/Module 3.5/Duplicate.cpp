#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n;
     cin>>n;

     vector<int> a(n);
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }
     int max=INT_MIN;
     for(int i=0;i<n;i++)
     {
        if(max<a[i])
        {
            max=a[i];
        }
     }

     vector<int> c(max+1,0);
     
     for(int i=0;i<n;i++)
     {
        c[a[i]]+=1;
     }

     int flag=0;
     for(int i=1;i<=max;i++)
     {
        if(c[i]>1)
        {
            flag=1;
            break;
        }
     }
     if(flag==1)
     {
        cout<<"YES";
     }
     else
     {
        cout<<"NO";
     }

    // for(int i=1;i<=max;i++)
    // {
    //     cout<<c[i]<<" ";
    // }


    return 0;
}