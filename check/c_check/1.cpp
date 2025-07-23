#include<bits/stdc++.h>
using namespace std;


vector<int> BFS(vector<int> &adj[], int v){

    vector<int> vis(v, 0);
    vector<int> ans;
    if(v==0) return ans;
    queue<int> q;
    q.push(0);
    while(!q.empty()){

        int node = q.front();
        q.pop();
        ans.push_back(node); 
        for(auto x: adj[node]){
            if(!vis[x]){
                vis[x] =1;
                q.push(x);            }
        }
        
    }

    return ans;

}

void DFS(int node, vector<int> adj[], vector<int> &ans, vector<int> &vis){

    vis[node] =1; 
    ans.push_back(node);
    for(auto it: adj[node]){
        if(!vis[it])
         DFS(it, adj,ans, vis); 
    }
}


vector<int> DFS_h(int v, vector<int>adj[])
{
    vector<int> vis(v,0); 
    vector<int> ans;
    for(int i=0;i<v;i++){
    if(!vis[i]){
        DFS(i,adj, ans, vis); 
    } 
}

return ans;
}


int main(){

    vector<vector<int>>matrix; 

    vector<pair<int,int>>  adj[n]; 
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){

            if (matirx[i][j]!=0)
            {
                adj[i].push_back({j,matrix[i][j]});
            }

        }

    }
    
   for(auto  x: adj )




    return  0; 
}