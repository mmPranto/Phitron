#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;

      string s;
      //cin>>s;     //when get space stop getting input
      //cin.getline(s,100);   // if char s[100]
      cin.ignore();   //ignore single line
      getline(cin,s);    //enter click korle input neua theme jay
      cout<<x<<endl;
      cout<<s<<endl;


    return 0;
}