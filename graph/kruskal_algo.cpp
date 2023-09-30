// sort all the edges according to weight 

#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector<int>rank, parent, size;
    public:
    DisjointSet(int n){
        rank.resize(n+1, 0);
        parent.resize(n+1);
        size.resize(n+1);
        for(int i = 0; i<=n; i++){
            parent[i] = i;
            size[i] = 1;
        }
    }


    int findUPar(int node){
        if(node == parent[node]) return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionBySize(int u, int v){
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        if(ulp_u == ulp_v) return;
        if(sizE[ulp_u] < size[ulp_v]){
            parent[ulp_u] = ulp_v;
            size[ulp_v]+=size[ulp_u];
        }   i
        else{
            parent[ulp_v] = ulp_u;
            size[ulp_u]+=size[ulp_v];
        }
    }
};

class Solution{
    public:
    int spanningTree(int V, vector<vector<int>> adj[]){
        vector<pair<int, pair<int, int>>> edges;

        for(int i =0; i<V; i++){
            for(auto it: adj[i]){
                int adjNode = it[0];
                int wt = it[1];
                int node = i;

                edges.push_back({wt, {node, adjNode}});
            }
        }
        DisjointSet ds(V);
        sort(edges.begin(), edges.end());

        int mstWt = 0;
        for(auto it:edges){
            int wt = it.first;
            int u = it.second.first;
            int v = it.second.second;

            if(ds.findUPar(u) != ds.findUPar(v)){
                mstWt += wt;
                ds.unionBySize(u, v);
            }
        }

        return mstWt;
        
    }
};
