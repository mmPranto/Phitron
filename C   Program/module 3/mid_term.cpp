#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int id;
    char name[200];
    char section;
    int mark;

};


int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
         Student s[3];

        for(int i=0;i<3;i++)
        {
            cin>>s[i].id>>s[i].name>>s[i].section>>s[i].mark;
        }
        int index=0;
        int max=s[index].mark;
        

        for(int i=1;i<3;i++)
        {
            if(s[i].mark>max || (s[i].mark==max && s[i].id<s[index].id))
            {
                max=s[i].mark;
                index=i;
            }

        }

        cout<<s[index].id<<" "<<s[index].name<<" "<<s[index].section<<" "<<s[index].mark<<endl;
    }
    

      
       



  


    return 0;
}