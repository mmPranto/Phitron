#include<bits/stdc++.h>
using namespace std;
int main()
{

     map<string,int> mp;
     mp["tamim"] = 100;    //log n
     mp["ramim"] = 5;
     mp["shamim"] = 50;

     cout<<mp["chagol"]<<endl;

    //  for(auto it = mp.begin();it!=mp.end();it++)   //n log n
    //  {
    //     cout<<it->first<<" "<<it->second<<endl;     //log n
    //  }

    if(mp.count("hamim"))
        cout<<"ache"<<endl;
    else
        cout<<"Nei"<<endl;


    return 0;
}