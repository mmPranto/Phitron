#include<bits/stdc++.h>
using namespace std;

bool dp[100005];

bool canReach(int start, int target)
{
    if(start==target)
        return true;
    if(start>target)
        return false;
    if(dp[start]!=-1)
        return dp[start];
    int l = canReach(start+5,target);
    int r = canReach(start*4,target);
    dp[start] = l || r;
    return dp[start];
}

int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    bool pos = canReach(1,n);

    if(pos)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
     


    return 0;
}