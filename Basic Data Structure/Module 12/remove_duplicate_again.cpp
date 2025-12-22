#include<bits/stdc++.h>
using namespace std;



int main()
{
    

    int val;
    list<int> v;

    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }

        v.push_back(val);

    } 

    v.sort();
    v.unique();

    for(int va : v)
    {
        cout<<va<<" ";
    }


     


    return 0;
}