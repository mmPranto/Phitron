//sort function didn't work in linked list
#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n;
     cin>>n;

     int a[n];

     for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }

     for(int i=0;i<n-1;i++)
     {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])    //if(a[i]>a[j])   for desc order sort
            {
                swap(a[i],a[j]);
            }
        }
     }

     for(int i=0;i<n;i++)
     {
        cout<<a[i]<<" ";
     }



    return 0;
}

//this code for asc order