#include<bits/stdc++.h>
using namespace std;
int main()
{

     string s;
     cin>>s;  //without space
     cout<<s[1]<<endl;
     cout<<s.at(0)<<endl;  //at function
     cout<<s.back()<<endl;
     cout<<s[s.size()-1]<<endl;
     cout<<s.front()<<endl;


    return 0;
}