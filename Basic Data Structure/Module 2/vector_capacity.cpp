#include<bits/stdc++.h>
using namespace std;
int main()
{

     vector<int> v;
     //cout<<v.capacity()<<endl;
     v.push_back(10);  //insert a value in the last
     //cout<<v.capacity()<<endl;
     v.push_back(20);
     //cout<<v.capacity()<<endl;
     v.push_back(30);
     //cout<<v.capacity()<<endl;
     v.push_back(40);
    // cout<<v.capacity()<<endl;
     v.push_back(50);
     //cout<<v.capacity()<<endl;



     cout<<v.size()<<endl;

    //  v.clear();
    //  v.push_back(100);
    //  cout<<v.size()<<endl;
    //  cout<<v[0]<<endl;
    //  cout<<v[1]<<endl;
    //  cout<<v[2]<<endl;
    //  cout<<v[3]<<endl;
    //  cout<<v[4]<<endl;

    v.resize(10,100);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }








    return 0;
}