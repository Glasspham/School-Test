#include"BFS.h"

int main(){
    // Số đỉnh trong đồ thị
    int vertices, started;
    // Biểu diễn danh sách kề của đồ thị
    vector<vector<int>> adjList;
    // Đánh dấu tất cả các đỉnh chưa được ghé thăm
    vector<bool> visited;

    // Trường hợp 1: Nhập dữ liệu đồ thị từ bàn phím, in kết qua ra màn hình
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    adjList.resize(vertices);
    visited.assign(vertices, false);
    cout << "Enter the vertices (format: u v):" << endl;
    for (int i = 0; i < vertices; ++i) {
        int u, v;
        cin >> u >> v;
        if(i == 0) started = u;
        addEdge(adjList, u, v);
    }
    cout << "Breadth First Traversal starting from vertex: ";
    bfs(adjList, started, visited, cout);
    cout << endl;

    // Trường hợp 2: Nhập dữ liệu đồ thị từ file DoThi.inp, in kết qua ra file DuongDi.out
    ifstream inFile("DoThi.inp");
    ofstream outFile("DuongDi.out");
    if (inFile.is_open() && outFile.is_open()) {
        inFile >> vertices;
        adjList.resize(vertices);
        visited.assign(vertices, false);
        for (int i = 0; i < vertices; ++i) {
            int u, v;
            inFile >> u >> v;
            if(i == 0) started = u;
            addEdge(adjList, u, v);
        }
        bfs(adjList, started, visited, outFile);
    } 
    else cout << "Unable to open file.";

    // Trường hợp 3: Bổ sung Trường hợp 2, in kết quả trung gian ra màn hình và file KQTG.out
    ofstream outIntermediate("KQTG.out");
    if (outIntermediate.is_open()) {
        inFile.clear();
        inFile.seekg(0, ios::beg);
        inFile >> vertices;
        adjList.resize(vertices);
        visited.assign(vertices, false);
        for (int i = 0; i < vertices; ++i) {
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
        outFile.close();
        outIntermediate.close();
    } 
    else cout << "Unable to open file.";

    return 0;
}
