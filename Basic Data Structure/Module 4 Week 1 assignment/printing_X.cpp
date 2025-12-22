

// \-----/
// -\---/-
// --\-/--
// ---x---
// --/-\--
// -/---\-
// /-----\     

#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
        if(i<=(n/2))
        {
            for(int j=1;j<=n;j++)
            {
                if(i==j)
                {
                    cout<<"\\";
                }
                else if((j+i)==(n+1))
                {
                    cout<<"/";
                }
                else
                {
                    cout<<" ";
                }

            }
            cout<<endl;
        }

        else if(i==((n/2)+1))
        {
            for(int k=1;k<=n;k++)
            {
                if(i==k)
                {
                    cout<<"X";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        else if(i>(n/2))
        {
            for(int m=1;m<=n;m++)
            {
                if(i==m)
                {
                    cout<<"\\";
                }
                else if((m+i)==(n+1))
                {
                    cout<<"/";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        
     }
     

    




    return 0;
}


// \---/
// -\-/-
// --X--
// -/-\-
// /---\