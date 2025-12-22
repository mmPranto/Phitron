#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    // Student(int r,int c,double g)      //constructor  //automatic called if the class is used
    // {
    //     roll =r;
    //     cls=c;
    //     gpa=g;
    // }

};

int main()
{
    // int r;
    // int c;
    // double g;
    // cin>>r>>c>>g;
    // Student rahim(r,c,g);
   // Student rahim(45,5,3.2);   
    // rahim.roll=45;
    // rahim.cls=5;
    // rahim.gpa=3.20;
    Student rahim;
    cin>>rahim.roll>>rahim.cls>>rahim.gpa;

   // Student karim(2,5,5.00);
    // karim.roll=2;
    // karim.cls=5;
    // karim.gpa=5;

    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
   // cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;

     


    return 0;
}