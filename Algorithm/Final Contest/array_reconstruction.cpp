#include<bits/stdc++.h>
using namespace std;
int main()
{

     int t;
     cin>>t;
     while(t--)
     {
        long long sum=0;
        int n;
        cin>>n;
        int x;
        for(int i=0;i<n-2;i++)
        {
            cin>>x;
            sum=sum+x;
        }
        long long m_sum;
        cin>>m_sum;
        long long diff=m_sum-sum;
        long long result=diff+1;
        cout<<result<<endl;
     }


    return 0;
}