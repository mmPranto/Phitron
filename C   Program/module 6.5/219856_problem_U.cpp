#include<bits/stdc++.h>
using namespace std;
int main()
{

     string s;
     cin>>s;
     int a[5]={0};

     for(int i=0;i<s.size();i++)
     {
        if(s[i]=='e' || s[i]=='E')
        {
            a[0]+=1;
        }
        else if(s[i]=='g' || s[i]=='G')
        {
            a[1]+=1;
        }
        else if(s[i]=='y' || s[i]=='Y')
        {
            a[2]+=1;
        }
        else if(s[i]=='p' || s[i]=='P')
        {
            a[3]+=1;
        }
        else if(s[i]=='t' || s[i]=='T')
        {
            a[4]+=1;
        }

     }
     int mx=max({a[0],a[1],a[2],a[3],a[4]});
     int mn=min({a[0],a[1],a[2],a[3],a[4]});

     if(mx==mn)
     {
        cout<<mx;
     }
     else 
     {
        cout<<mn;
     }


    return 0;
}