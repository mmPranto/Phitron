#include <bits/stdc++.h>
using namespace std;

void dijkstra(set<int>& locations,set<pair<pair<int,int>,int>>&roads,int source) 
{
    
    map<int,set<pair<int,int>>>graph;
    
    for(auto road:roads) 
    {
        int u = road.first.first;
        int v = road.first.second;
        int w = road.second;
        graph[u].insert({v, w});
        graph[v].insert({u, w});  
    }
    
    map<int, int>dist;
    for(int node:locations) 
    {
        dist[node]=INT_MAX;  
    }
    dist[source]=0;
    
    
    set<pair<int,int>> pq;
    pq.insert({0,source});
    
    while (!pq.empty()) 
    {
        
        auto top=*pq.begin();
        pq.erase(pq.begin());
        int u=top.second;
        int current_dist=top.first;
        
        
        if(current_dist >dist[u]) 
        {
            continue;
        }
        
        
        for (auto neighbor:graph[u]) 
        {
            int v=neighbor.first;
            int weight=neighbor.second;
            
            
            int new_dist=dist[u]+weight;
            
            
            if(new_dist<dist[v]) 
            {
                pq.erase({dist[v],v});  
                dist[v]=new_dist;     
                pq.insert({new_dist,v}); 
            }
        }
    }
    

    for(int node:locations) 
    {
        cout <<"Location "<<node<<": "<<dist[node]<<endl;
    }
}

int main() 
{
    
    set<int>locations={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    set<pair<pair<int,int>,int>> roads = 
    {
        {{0,1},10},{{0,2},15},{{1,3},12},{{2,3},10},{{1,4},15},
        {{2,5},20},{{3,6},8},{{4,6},5},{{5,7},18},{{6,8},7},
        {{6,9},12},{{7,9},14},{{8,10},6},{{9,10},8},{{10,11},9},
        {{11,12},11},{{12,13},7},{{13,14},5},{{14,15},3},{{15,16},4},
        {{16,17},6},{{17,18},2},{{18,19},8},{{0,6},50},{{5,8},25},
        {{10,19},30},{{12,19},15},{{0,19},100},{{5,15},60},{{4,14},55}
    };
    
   
    dijkstra(locations,roads,0);

    return 0;
}