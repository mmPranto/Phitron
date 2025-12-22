#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,s;
        cin>>n>>s;

        int a[n];
        for(int f=0;f<n;f++)
        {
            cin>>a[f];
        }
        
        
        sort(a,a+n,greater<int>());
        int count=0;
        int flag=0;
        int sum=s;
        int l,k,j;

        for( j=0;j<=n-3;j++)
        {
            if(a[j]<sum)
            {
                sum-=a[j];
                count+=1;

                for( k=j+1;k<=n-2;k++)
                {
                    if(a[k]<sum)
                    {
                        sum-=a[k];
                        count+=1;
                        
                        for( l=k+1;l<=n-1;l++)
                        {
                            if(a[l]==sum)
                            {
                                sum-=a[l];
                                count+=1;
                                flag=1;
                                break;
                            }
                        }
                        if(l==n)
                        {
                            sum+=a[k];
                            count-=1;
                        }
                    }

                    if(flag==1)
                    {
                        break;
                    }
                }

                if(k==n-1)
                {
                    sum+=a[j];
                }
            }
            if(flag==1)
            {
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
        
    }

     


    return 0;
}



