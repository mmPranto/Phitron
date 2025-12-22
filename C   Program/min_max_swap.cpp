#include<iostream>
#include<algorithm> // for min max built in function
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    // if(a<b)
    // {
    //     cout<<a<<endl;
    // }
    // else
    // {
    //     cout<<b<<endl;
    // }

 /*   cout<<min(a,b)<<endl;  //not only for 2 .it works for many more.
    cout<<max(a,b)<<endl;  //not only for 2 .it works for many more.

    cout<<min({3,5,7,10,12})<<endl;  

     cout<<max({3,5,7,10,12})<<endl;  

*/


    //  int temp=a;
    //  a=b;
    //  b=temp;
     
     swap(a,b);

     cout<<a<<" "<<b<<endl;

    return 0;
}