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
        this->roll=roll;     //this key word can be write in two way this-> or (*this)
        this->cls=cls;
        this->gpa=gpa;
        
    }

};

Student* fun()
{
    Student *karim=new Student(2,5,5.00);
    
    return karim;
}

int main()
{
    //Student rahim(45,5,3.2);
    Student *obj=fun();


    cout<<(*obj).roll<<" "<<(*obj).cls<<" "<<obj->gpa<<endl;

         


    return 0;
}