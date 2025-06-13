#include<iostream>
#include<vector>
using namespace std;

class GraphRepresentation {

    // List representation for undirected graph
    vector<vector<int>> list_representation_undirected(int nodes, int edges) {
        vector<vector<int>> arr(nodes + 1);
        cout << "Now you can start to enter the edges between the nodes\n";
        int node1, node2;
        for (int i = 0; i < edges; i++) {
            cout << "Enter node1 node2: ";
            cin >> node1 >> node2;
            arr[node1].push_back(node2);
            arr[node2].push_back(node1);  // For undirected graph
        }
        return arr;
    }

    // List representation for directed graph
    vector<vector<int>> list_representation_directed(int nodes, int edges) {
        vector<vector<int>> arr(nodes + 1);
        cout << "Now you can start to enter the edges between the nodes\n";
        int node1, node2;
        for (int i = 0; i < edges; i++) {
            cout << "Enter node1 node2: ";
            cin >> node1 >> node2;
            arr[node1].push_back(node2);
        }
        return arr;
    }

    // List representation for undirected weighted graph
    vector<vector<pair<int, int>>> list_representation_undirected_weighted(int nodes, int edges) {
        vector<vector<pair<int, int>>> arr(nodes + 1);
        cout << "Now you can start to enter the edges between the nodes\n";
        int node1, node2, weight;
        for (int i = 0; i < edges; i++) {
            cout << "Enter node1 node2 weight: ";
            cin >> node1 >> node2 >> weight;
            arr[node1].push_back({node2, weight});
            arr[node2].push_back({node1, weight});  // For undirected graph
        }
        return arr;
    }

    // List representation for directed weighted graph
    vector<vector<pair<int, int>>> list_representation_directed_weighted(int nodes, int edges) {
        vector<vector<pair<int, int>>> arr(nodes + 1);
        cout << "Now you can start to enter the edges between the nodes\n";
        int node1, node2, weight;
        for (int i = 0; i < edges; i++) {
            cout << "Enter node1 node2 weight: ";
            cin >> node1 >> node2 >> weight;
            arr[node1].push_back({node2, weight});
        }
        return arr;
    }

    // Matrix representation for undirected graph
    vector<vector<int>> matrix_representation_undirected(int nodes, int edges) {
        vector<vector<int>> arr(nodes + 1, vector<int>(edges + 1, 0));
        cout << "Now you can start to enter the edges between the nodes\n";
        int node1, node2;
        for (int i = 0; i < edges; i++) {
            cout << "Enter node1 node2: ";
            cin >> node1 >> node2;
            arr[node1][node2] = 1;
            arr[node2][node1] = 1;  // For undirected graph
        }
        return arr;
    }

    // Matrix representation for directed graph
    vector<vector<int>> matrix_representation_directed(int nodes, int edges) {
        vector<vector<int>> arr(nodes + 1, vector<int>(edges + 1, 0));
        cout << "Now you can start to enter the edges between the nodes\n";
        int node1, node2;
        for (int i = 0; i < edges; i++) {
            cout << "Enter node1 node2: ";
            cin >> node1 >> node2;
            arr[node1][node2] = 1;
        }
        return arr;
    }

};

int main() {
    GraphRepresentation g;

    int nodes = 5, edges = 6;

    // Call any of the functions, for example, list representation of undirected graph:
    vector<vector<int>> graph = g.list_representation_undirected(nodes, edges);

    // Output the result
    for (int i = 1; i <= nodes; i++) {
        cout << "Node " << i << " is connected to: ";
        for (int j : graph[i]) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

