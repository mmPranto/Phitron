#include<bits/stdc++.h>
using namespace std;
int main()
{

     char s;
     cin>>s;

     if(s>=48 && s<=57 )
     {
        cout<<"IS DIGIT";
     }
     else
     {
        cout<<"ALPHA"<<endl;
        if(s>=65 && s<=90)
        {
            cout<<"IS CAPITAL";
        }
        else
        {
            cout<<"IS SMALL";
        }
     }


    return 0;
}