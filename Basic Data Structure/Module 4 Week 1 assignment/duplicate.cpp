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

     sort(a.begin(),a.end());
     int flag=0;
     for(int i=0,j=i+1;i<n-1;i++,j++)
     {
        if(a[i]==a[j])
        {
            flag=1;
            break;
        }
        
     }
     if(flag==1)
     {
        cout<<"YES"<<endl;
     }
     else
     {
        cout<<"NO"<<endl;
     }


    return 0;
}