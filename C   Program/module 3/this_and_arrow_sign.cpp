#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll,int cls,double gpa)      //constructor  //automatic called if the class is used
    {
        this->roll=roll;     //this key word can be write in two way this-> or (*this).roll
        this->cls=cls;
        this->gpa=gpa;
        
    }

};

int main()
{
    Student rahim(45,5,3.2);

    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;

         


    return 0;
}