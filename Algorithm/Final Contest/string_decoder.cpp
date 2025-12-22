#include<bits/stdc++.h>
using namespace std;
int main()
{

     int t;
     cin>>t;
     while(t--)
     {
        string s;
        cin>>s;
        for(int i=0;i<s.length();i+=2)
        {
            char ch[s.length()]=s[i];
            int cnt[s.len]=s[i+1]-'0';
            for(int i=0;i<cnt;i++)
                cout<<ch;
        }
        cout<<endl;
    }


    return 0;
}