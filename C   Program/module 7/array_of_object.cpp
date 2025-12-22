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
    //int a[5];
    int n;
    cin>>n;
    
    Student a[n];

    for(int i=0;i<n;i++)
    {
      //  cin>>a[i].name>>a[i].roll>>a[i].marks;
        cin.ignore();         //if in the name have space
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }




     


    return 0;
}