#include<bits/stdc++.h>
using namespace std;
int main()

{
    vector<int> v={1,2,3,2,5,2};
    vector<int> v2={100,200,300};

    //replace(v.begin(),v.end()-1,2,100);

    // auto it=find(v.begin(),v.end(),100);         //vector<int>::iterator it = find(v.begin(),v.end(),100);

    // if(it==v.end())
    // {
    //     cout<<"Not Found"<<endl;
    // }
    // else
    // {
    //     cout<<"Found"<<endl;
    // }




    //v.erase(v.begin()+2);     //for single value delete 
    //v.erase(v.begin()+1,v.begin()+5);  //for multiple value delete

    //v.insert(v.begin()+2,100);  //for single value insert

    //v.insert(v.begin()+2,v2.begin(),v2.end());    //for multiple value insert

    // v.pop_back();
    // v.pop_back();
    // vector<int> v2;
    // v2=v;
    // // for(int i=0;i<v2.size();i++)
    // // {
    // //     cout<<v[i]<<" ";
    // // }

    for(int x:v)
    {
        cout<<x<<" ";
    }


     


    return 0;
}