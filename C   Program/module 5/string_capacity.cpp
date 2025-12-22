#include<bits/stdc++.h>
using namespace std;
int main()
{

     string s="Hello world";
     s.resize(100,'_');
     cout<<s<<endl;
     cout<<"Size : "<<s.size()<<endl;
     cout<<"Max size : "<<s.max_size()<<endl;   //10^6 in online
     cout<<"Capacity : "<<s.capacity()<<endl;
    // s.clear();
     cout<<"Clear : "<<s.size()<<endl;

     if(s.empty()==true)
     {
        cout<<"Empty"<<endl;
     }
     else
     {
        cout<<"Not empty"<<endl;
     }

     
     





    return 0;
}