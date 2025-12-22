#include<bits/stdc++.h>
using namespace std;
int main()
{
    //max priority queue
     priority_queue<int> pq;
     pq.push(10);
     pq.push(5);
     pq.push(30);

    //  cout<<pq.top()<<endl;
    //  pq.push(100);
    //  cout<<pq.top()<<endl;
    //  pq.pop();  //100
    //  pq.pop();  //30
    //  cout<<pq.top()<<endl;

     //min priority queue
     priority_queue<int,vector<int>,greater<int>> mpq;
     mpq.push(10);
     mpq.push(5);
     mpq.push(30);
     mpq.push(2);
    //  mpq.pop();
    //  mpq.pop();
     cout<<mpq.top()<<endl;
     


    return 0;
}