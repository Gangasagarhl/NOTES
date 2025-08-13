#include <bits/stdc++.h>
using namespace std;

class Solution {
private:

    /* Function to perform DFS traversal 
    while checking for safe nodes */
    bool dfsCheck(int node, vector<int> adj[], 
                  vector<int> &vis, 
                  vector<int> &pathVis, 
                  vector<int> &check) {
                      
        // Mark the node as visited
		vis[node] = 1;
		
		// Add the node to current path
		pathVis[node] = 1;
		
		// Mark the node as potentially unsafe
		check[node] = 0;
		
		
		// Traverse for adjacent nodes
		for (auto it : adj[node]) {
		    
			// When the node is not visited
			if (!vis[it]) {
			    
			    /* Perform DFS recursively and if 
			    a cycle is found, return false */
    			if (dfsCheck(it, adj, vis, pathVis, check)) {
    			        
    			        /* Return true since a 
    			        cycle was detected */
    					return true;
    				}

			}
			
			/* Else if the node has been previously 
			visited in the same path*/
			else if (pathVis[it]) {
				
				/* Return true since a 
		        cycle was detected */
				return true;
			}
		}
		
		/* If the current node neither exist 
		in a cycle nor points to a cycle, 
		it can be marked as a safe node */
		check[node] = 1;
		
		// Remove the node from the current path
		pathVis[node] = 0;
		
		// Return false since no cycle was found
		return false;
	}
    
public:

	/* Function to get the
	eventually safe nodes */
	vector<int> eventualSafeNodes(int V, 
	                vector<int> adj[]) 
{
	    // Visited array
	    vector<int> vis(V, false);
	    
	    // Path Visited array
	    vector<int> pathVis(V, false);
	    
	    // To keep a check of safe nodes
	    vector<int> check(V, false);
	    
	    /* Traverse the graph and 
	    check for safe nodes */
		for (int i = 0; i < V; i++) 
        {
			if (!vis[i]) 
            {   // Start DFS traversal
				dfsCheck(i, adj, vis, pathVis, check);
			}
		}
		
		// To store the result
		vector<int> ans;
		
		// Add the safe nodes to the result
		for (int i = 0; i < V; i++) 
        {
			if (check[i] == 1) 
			    ans.push_back(i);
		}
		
		// Return the result
		return ans;
	}
};

int main() {
    
    int V = 7;
    vector<int> adj[V] = {
         {1,2},
         {2,3},
         {5},
         {0},
         {5},
         {},
         {}
    };
    
    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    /* Function call to get the eventually 
    safe nodes in the given graph */
    vector<int> ans = sol.eventualSafeNodes(V, adj);
    
    // Output
    cout << "The eventually safe nodes in the graph are:\n";
    for(int i=0; i < ans.size(); i++) 
    {
        cout << ans[i] << " ";
    }
    
    return 0;
}