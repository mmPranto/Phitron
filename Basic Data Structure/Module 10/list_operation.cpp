#include<bits/stdc++.h>
using namespace std;
int main()
{

     list<int> l={20,30,10,50,30,60,60,10};

     //l.remove(10);

    //  l.sort(); //asc oreder
    //  l.sort(greater<int>());  //desc order 

    //  l.unique();   //need sorted 
     
     l.reverse();   //full list in reverse

     for(int val : l)
     {
        cout<<val<<" ";
     }


    return 0;
}