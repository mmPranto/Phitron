#include<bits/stdc++.h>
using namespace std;
int main()
{

     list<int> l;  //link as stl same as vector  
     cout<<l.size()<<endl;

     list<int> a(10);  //10 size list will create
     cout<<a.size()<<endl;

     list<int> b(10,3); //10 size list will create and all the value is 3

    //  for(auto it=b.begin();it!=b.end();it++)
    //  {
    //     cout<<*it<<" ";
    //  }

    //more shortcurt

     for(int val : b)
     {
        cout<<val<<" ";
     }

     cout<<endl;
     list<int> c={1,2,3,4,5};

     c.resize(10,100);
     list<int> d(c); //copy of value c;
     
     for(int val : c)
     {
        cout<<val<<" ";
     }
     cout<<endl;

     int e[]={10,20,30};
     list<int> f(e,e+3);
    for(int val : f)
    {
        cout<<val<<" ";
    }

    cout<<endl;

    vector<int> v={40,50,60};

    list<int> g(v.begin(),v.end());
    g.clear();

    for(int val : g)
    {
        cout<<val<<" ";
    }
    cout<<g.size()<<endl;

    if(g.empty())
    {
        cout<<"empty"<<endl;
    }
    cout<<endl;

    cout<<g.max_size()<<endl;




    return 0;
}