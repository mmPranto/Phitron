#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s = "Hello World";
    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i]<<endl;
    // }

    // cout<<*s.begin()<<endl;
    // cout<<*(s.end()-1)<<endl;

    // for(string::iterator it=s.begin();it<s.end();it++)
    // {
    //     cout<<*it<<endl;
    // }

    //or

    for(auto it=s.begin();it<s.end();it++)  // auto key word automatic stress which type no need to write string::iterator
    {
        cout<<*it<<endl;
    }




    return 0;
}