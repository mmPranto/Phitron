#include<bits/stdc++.h>
using namespace std;
int main()
{

    //  char s[10]="Hello";
    //  strcpy(s,"Gello");    //old way

    //  cout<<s<<endl;
    

    //update way to intial new string

    string s="Hello";
    s="gello";
    cout<<s<<endl;

    //old way to compare

    char s1[10]="Hello";
    char s2[10]="Hello";
    //new way to compare
    if(strcmp(s1,s2)==0)
    {
        cout<<"Same"<<endl;
    }

    string s3="Hello";
    string s4="gello";
    if(s3==s4)
    {
        cout<<"Update same"<<endl;
    }
    else
    {
        cout<<"Not same"<<endl;
    }

    // string never compromise with size
    string s5="HI";
    s5="I have a boy friend";
    cout<<s5<<endl;







    return 0;
}