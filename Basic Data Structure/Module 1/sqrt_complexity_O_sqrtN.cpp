#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n;
     cin>>n;

     for(int i=1;i<=sqrt(n);i++)  //or for(int i=1;i*i<=n;i++)
     {
        if(n%i==0)
        {
            cout<<i<<" "<<n/i<<" "; // all the divisors
        }
     }


    return 0;
}