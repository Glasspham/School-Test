#include"BFS.h"

int main(){
    // Số đỉnh trong đồ thị
    int vertices, started;
    // Biểu diễn danh sách kề của đồ thị
    vector<vector<int>> adjList;
    // Đánh dấu tất cả các đỉnh chưa được ghé thăm
    vector<bool> visited;
    ifstream inFile("DoThi.inp");
    ofstream outIntermediate("KQTG.out");
    if (outIntermediate.is_open() && inFile.is_open()){
        inFile >> vertices;
        adjList.resize(vertices);
        visited.assign(vertices, false);
        for (int i = 0; i < vertices; ++i){
            int u, v;
            inFile >> u >> v;
            if(i == 0) started = u;
            addEdge(adjList, u, v);
        }
        bfs(adjList, started, visited, cout);
        cout << endl;
        visited.assign(vertices, false);
        bfs(adjList, started, visited, outIntermediate);
        inFile.close();
        outIntermediate.close();
    } 
    else cout << "Unable to open file.";

    return 0;
}