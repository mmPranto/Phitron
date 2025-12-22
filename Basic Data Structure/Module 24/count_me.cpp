#include<bits/stdc++.h>
using namespace std;
int main()
{

     int t;
     cin>>t;
     cin.ignore();
     while(t--)
     {
        
        string s,s2;
        getline(cin,s);
        s2=s;
        stringstream ss(s);
        string word,word2;
        map<string,int>mp;
        map<string,int>mp2;
        vector<string> v;
        while(ss>>word)
        {
            
            if(mp[word]==0)
            {
                v.push_back(word);
            }
            mp[word]++;
        }
        int mx=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            mx=max(it->second,mx);
        }
        
        stringstream ss2(s2);
        while(ss2>>word2)
        {
            mp2[word2]++;
            if(mp2[word2]==mx)
            {
                cout<<word2<<" "<<mp2[word2]<<endl;
                break;
            }
        }
     }


    return 0;
}