#include<bits/stdc++.h>
using namespace std;
int main()
{

    //  vector<int> v;
    //  list<int> l;
     stack<int> st;

     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        st.push(x);
     }

     while(!st.empty())
     {
        cout<<st.top()<<endl;
        st.pop();
     }

     //For top and pop must check the stack is empty or not


    return 0;
}