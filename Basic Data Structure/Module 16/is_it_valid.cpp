#include<bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for(char c : s)
    {
        if(!st.empty() && (c=='0' && st.top()=='1' || c=='1' && st.top()=='0'))
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }
    if(!st.empty())
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        if(!isValid(s))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}