#include<bits/stdc++.h>
using namespace std;
int main()
{

     int t;
     cin>>t;
     while (t--)
     {
        string s1,s2;
        cin>>s1>>s2;
        long long cnt_1=0;
        long long cnt_2=0;
        long long cnt_3=0;
        for(char ch:s1)
        {
            if(ch==s2[0])
                cnt_1++;
            else if(ch==s2[1])
                cnt_2=cnt_2+cnt_1;
            else if(ch==s2[2])
                cnt_3=cnt_3+cnt_2;
        }

        cout<<cnt_3<<endl;
     }
     


    return 0;
}