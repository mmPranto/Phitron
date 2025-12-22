#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;

};

int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    int mn=INT_MAX;
    

    for(int i=0;i<n;i++)
    {
        mn=min(a[i].marks,mn);
    }

    Student nm;
    nm.marks=INT_MAX;     // lowest mark paoa lok er all information
    for(int i=0;i<n;i++)
    {
        if(a[i].marks<nm.marks)
        {
            nm=a[i];
        }
    }

    cout<<mn<<endl;
    cout<<nm.name<<" "<<nm.roll<<" "<<nm.marks<<endl;
    

    return 0;
}