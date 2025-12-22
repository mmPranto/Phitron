#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    vector<int> count(26,0);

    for(int i=0;i<s.size();i++)
    {
        count[s[i]-97]+=1;
    }

    for(int i=0;i<26;i++)
    {
        if(count[i]>0)
        {
            cout<<char('a'+i)<<" : "<<count[i]<<endl;
        }
    }


     




    return 0;
}