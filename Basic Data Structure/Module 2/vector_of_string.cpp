#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n;
     cin>>n;
     cin.ignore();
     vector<string>v(n);
     for(int i=0;i<n;i++)
     {
        //cin>>v[i];    //without space
        getline(cin,v[i]);   //with space
     }

     for(string x:v)
     {
        cout<<x<<endl;
     }



    return 0;
}