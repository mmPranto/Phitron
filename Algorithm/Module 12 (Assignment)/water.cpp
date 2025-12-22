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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int mx_1 = INT_MIN;
        int idx_1;
        int mx_2 = INT_MIN;
        int idx_2;
        for(int i=0;i<n;i++)
        {
            if(mx_1<arr[i])
            {
                mx_1= arr[i];
                idx_1=i;
            }
        }

        for(int i=0;i<n;i++)
        {
            if(mx_1>arr[i] && mx_2<arr[i])
            {
                mx_2= arr[i];
                idx_2=i;
            }
        }

        if(idx_1<idx_2)
            cout<<idx_1<<" "<<idx_2<<endl;
        else
            cout<<idx_2<<" "<<idx_1<<endl;

     }


    return 0;
}