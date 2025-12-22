#include<bits/stdc++.h>
using namespace std;
int main()
{

     char s[100000];
     cin>>s;
     int c[3]={0};

     for(int i=0,j=strlen(s)-1;i<=j;i++,j--)
     {
      if(s[i]==1)
      {
         c[0]+=1;
      }
      else if(s[i]==2)
      {
         c[1]+=1;
      }
      else if(s[i]==3)
      {
         c[2]+=1;
      }
        
     }
     int sum=0;
     for(int i=0;i<3;i++)
     {
      sum+=a[i];
     }

     for(int i=0;i=<sum;i++)
     {
        
     }

     




    return 0;
}