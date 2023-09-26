// only meant for directed acyclic graphs 
// we do DFS

// linear ordering of vertices suct that if there exists an edge b/w u and v, 
// u appears before v in that ordering

#include<bits/stdc++.h>
using namespace std;

class Solution
(
    private: 
    void dfs(int node, int vis[], stack<int>st, vector<int>adj[])
    {
        vis[node] = 1;
        for(auto it: adj[node]){
            if(!vis[it]) dfs(it, vis, st, adj);
        }
        st.push_back(node);
    }
    public:
    vector<int> toposort(int V, vector<int>adj[]){
        int vis[V] = {0};
        stack<int>st;
        for(int i=0; i<V; i++){
            if(!vis[i]){
                dfs(i, vis, st, adj);
            }
        }

        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
);