#include<bits/stdc++.h>
using namespace std;
int main()
{

     list<int> l={10,20,30,40,20,20,70};
     list<int> l3={100,200};
     list<int>l2;
     vector<int> v={2,3,4};
     //l2=l;
     //or
     l2.assign(l.begin(),l.end());
     
    //  l2.push_back(40);
    //  l2.push_front(0);
    //  l2.push_front(-10);

    //  l.pop_back();
    //  l.pop_front();

    //cout<< *next(l.begin(),2)<<endl;

    //l.insert(next(l.begin(),2),v.begin(),v.end());
     // l.erase(next(l.begin(),2)); 
     //l.erase(next(l.begin(),2),next(l.begin(),5));  
     

     //replace(l.begin(),l.end(),20,999);

     auto it=find(l.begin(),l.end(),20);
    if(it==l.end())
    {
        cout<<"Not found"<<endl;
    }
    else
    {
        cout<<"found"<<endl;
    }

     for(int val : l)
     {
        cout<<val<<" ";
     }
     cout<<endl;


    return 0;
}