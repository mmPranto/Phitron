#include<bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
   // int x=10;  //static variable
   int *x=new int;
   *x=10;
    p=x;
    cout<<"Fun ->"<<*p<<endl;
    return ;
}
int main()
{
    //int x=10;
    // for dynamic variable use new key word.

    // int *p=new int;//use pointer because  access the heap memory
    // *p=100;
    // cout<<*p<<endl;
    fun();
    cout<<"main"<<*p<<endl;
    int *a=new int;
    delete a;
    




    return 0;
}