#include<bits/stdc++.h>
using namespace std;

class Student    //take few memory 
{
    public:
    char name[100];     //100 byte
    int roll;            //4 byte
    double gpa;           //8 byte

};

int main()
{
   // int a;    //built in data type
    Student a,b;   //user defined data type and object

    // a.roll=10;
    // a.gpa=4.5;
    // char temp[100]="Sakib";    //more 100 byte for temp
    // strcpy(a.name,temp);

    cin.getline(a.name,100);
    cin>>a.roll>>a.gpa;
    cin.ignore();  //or getchar();   //two of any one
    cin.getline(b.name,100);
    cin>>b.roll>>b.gpa;
    

    cout<<a.name<<endl;
    cout<<a.roll<<endl;
    cout<<a.gpa<<endl;

    cout<<b.name<<endl;
    cout<<b.roll<<endl;
    cout<<b.gpa<<endl;



     


    return 0;
}