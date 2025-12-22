#include <bits/stdc++.h>
using namespace std;


int minKey(int key[],bool mstSet[],int V)    //this function work for finding the minimum edge value.
{
    int min=INT_MAX,min_index;
    for(int v=0;v<V;v++)
        {
        if (!mstSet[v]&&key[v]<min)
        {
            min=key[v];
            min_index=v;
        }
    }
    return min_index;
}


void prims(int graph[][100],int V)    //work as prims algorithm
{
    int parent[V];
    int key[V];
    bool mstSet[V];

    for(int i=0;i<V;i++)
    {
        key[i]=INT_MAX;
        mstSet[i]=false;
    }


    key[0] = 0;
    parent[0] = -1;


    for(int count=0;count<V-1;count++)
    {

        int u=minKey(key,mstSet,V);
        mstSet[u]=true;


        for(int v=0;v<V;v++)
        {

            if(graph[u][v]&& !mstSet[v]&&graph[u][v]<key[v])
            {
                parent[v]=u;
                key[v]=graph[u][v];
            }
        }
    }


    int totalWeight = 0;
    cout << "Minimum Spanning Tree edges:\n";      //print the data.mst and the total mst edge weight
    for(int i=1;i<V;i++)
    {
        cout<<"Edge: (" << parent[i] << ", " << i << ") Weight: "<<graph[parent[i]][i]<<endl;
        totalWeight+=graph[parent[i]][i];
    }
    cout<<"Total weight of MST: "<<totalWeight<<endl;
}

int main()
{
    int V,E;
    cout<<"Number of vertices: ";
    cin>>V;
    cout<<"Number of edges: ";
    cin >>E;


    int graph[100][100];             // create a graph 100 nodes. but from 100 use only number of V. and initialize all the graph 0
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            graph[i][j]=0;
        }

    }


    cout<<"Edges (format: vertex1 vertex2 weight):"<<endl;    // first collect u and v from user then the weight of 2 nodes
    for(int i=0;i<E;i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        graph[u][v]=w;
        graph[v][u]=w;
    }


    /* int V=5,E=7;

    int graph[100][100];               // for static data.. i was work focused on user input.that's why this is in comment
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            graph[i][j]=0;
        }




         graph[0][1]=2;
         graph[0][3]=6
         graph[1][2]=3
         graph[1][3]=8
         graph[1][4]=5
         graph[2][4]=7
         graph[3][4]=9



    */


    prims(graph,V);

    return 0;
}


