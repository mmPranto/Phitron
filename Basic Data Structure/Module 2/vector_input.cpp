#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n;
     cin>>n;
     //with decleare n
    //  vector<int> v(n);
    //  for(int i=0;i<n;i++)
    //  {
    //     cin>>v[i];
    //  }

    //without declear n
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
     for(int x:v)
     {
        cout<<x<<" ";
     }
     


    return 0;
}