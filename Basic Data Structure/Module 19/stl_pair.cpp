#include<bits/stdc++.h>
using namespace std;
int main()
{     
    pair<string,int> p;
    //p = make_pair("Hello",3);
    //shortcut
    p={"Hi",3};

    cout<<p.first<<endl;
    cout<<p.second<<endl;

    //creating a vector of pair
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }

    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    return 0;
}