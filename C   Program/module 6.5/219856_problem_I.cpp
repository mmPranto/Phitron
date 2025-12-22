#include<bits/stdc++.h>
using namespace std;
int main()
{

     string s;
     string c;
     cin>>s;
     c=s;
     reverse(c.begin(),c.end());
     if(s==c)
     {
        cout<<"YES";
     }
     else
     {
        cout<<"NO";
     }



    return 0;
}