// topological sort using BFS 

// indegree refers to number of incoming edges to a node
// as BFS, we will use queue DS

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<int> toposort(int V, vector<int>adj[])
    {
        int indegree[V] = {0};
        for(int i = 0; i<V; i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }

        queue<int>q;
        for(int i = 0; i<V; i++){
            if(indegree[i]==0) q.push(i);
        }

        vector<int>topo;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);

            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }

        }

        return topo;
    }
};