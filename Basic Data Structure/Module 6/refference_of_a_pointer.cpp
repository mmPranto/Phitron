#include<bits/stdc++.h>
using namespace std;

void fun(int* p)  //void fun(int* &p)  //for use same pointer
{
    int y=200;   
    p=&y;
    //p=NULL
    cout<<"In fun function : "<<(int)&p<<endl;
}

int main()
{

     int x=10;
     int* p=&x;
     fun(p);
     cout<<"In main function : "<<(int)&p<<endl;
     //cout<<"In main function : "<<p<<endl;   //get the result 0.



    return 0;
}

//in the main function p and fun function p is not samae.if need proof then run the code.