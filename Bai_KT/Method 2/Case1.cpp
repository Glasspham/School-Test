#include"BFS.h"
int main(){
    int vertices, u, v, startNode;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    vector<vector<int>> adjList(vertices);
    vector<bool> visited(vertices, false);
    cout << "Enter the vertices (format: u v):\n";
    for (int i = 0; i < vertices; i++){
        int u, v;
        cin >> u >> v;
        if(i == 0) startNode = u;
        addEdge(adjList, u, v);
    }
    cout << "Breadth First Traversal starting from vertex: ";
    bfs(adjList, startNode, visited, cout);
    return 0;
}
