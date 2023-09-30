// Dijkstra and bellman ford were for single source shortest path
// This is for multi source shortest path
// Helps detect negative cycles as well

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void shortest_dist(vector<vector<int>>&matrix){
        int n = matrix.size();
        for(int i =0; i<n; i++){
            for(int j =0; j<n; j++){
                if(matrix[i][j]==-1) matrix[i][j] = 1e9;
                if(i==j) matrix[i][j] = 0;
            }
        }


        for(int k = 0; k<n; k++){
            for(int i = 0; i<n; i++){
                for(int j = 0; j<n; j++){
                    matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
                }
            }
        }


        for(int i =0; i<n; i++){
            for(int j =0; j<n; j++){
                if(matrix[i][j]==1e9) matrix[i][j] = -1;
                if(i==j) matrix[i][j] = 0;
            }
        }
    }

};

