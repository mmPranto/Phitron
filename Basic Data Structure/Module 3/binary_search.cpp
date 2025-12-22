#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n;
     cin>>n;
     //int a[n];  //by array
     vector<int>a(n);
     for(int i=0;i<n;i++)
     {
        //cin>>a[i];
        cin>>a[i];//vector input
     }

     sort(a.begin(),a.end());  //sort a vector in asc order


     int val;
     cin>>val;
     int flag=0;

     int l=0;
     int r=n-1;
     while(l<=r)//that condition the loop is running
     {
        int mid=(l+r)/2;
        if(a[mid]==val)
        {
            flag=1;
            break;
        }
        else if(a[mid]>val)
        {
            r=mid-1;
        }
        else //if(a[mid]<val)
        {
            l=mid+1;
        }


     }


     if(flag==1)
     {
        cout<<"Found\n";
     }
     else
     {
        cout<<"Not found\n";
     }




    return 0;
}