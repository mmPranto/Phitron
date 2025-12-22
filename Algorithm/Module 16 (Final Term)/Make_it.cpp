#include<bits/stdc++.h>
using namespace std;

int dp[100005];

bool canReach(int start, int target)
{
    if(start==target)
        return true;
    if(start>target)
        return false;
    if(dp[start]!=-1)
        return dp[start];
    int l = canReach(start+3,target);
    int r = canReach(start*2,target);
    dp[start]= l || r;
    return dp[start];
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        memset(dp,-1,sizeof(dp));
        bool pos = canReach(1,n);

        if(pos)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
     


    return 0;
}