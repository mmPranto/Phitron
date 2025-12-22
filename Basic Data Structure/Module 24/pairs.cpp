#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int num;

        Person(string name,int num)
        {
            this->name=name;
            this->num=num;
        }
    
};

class cmp
{
    public:
        bool operator()(Person l, Person r)
        {
            if(l.name > r.name)
                return true;
            else if(l.name < r.name)
                return false;
            else
                return l.num < r.num;
        }
};



int main()
{
    priority_queue<Person,vector<Person>,cmp> pq;
    int n;
    cin>>n;
    for(int i=0; i<n ; i++)
    {
        string name;
        int num;
        cin>>name>>num;
        Person obj(name,num);
        pq.push(obj);
    }
    
    while(!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().num<<endl;
        pq.pop();
    }
     


    return 0;
}