#ifndef _BFS_H_
#define _BFS_H_

#include <iostream>
#include <fstream>
#include <queue>
#include <vector>
using namespace std;

// Function to perform Breadth First Search on a graph
// represented using adjacency list
void bfs(vector<vector<int>>& adjList, int startNode, vector<bool>& visited, ostream& outStream){
    // Tạo hàng đợi cho BFS
    queue<int> q;

    // Đánh dấu nút hiện tại là đã ghé thăm và đưa vào hàng đợi
    visited[startNode] = true;
    q.push(startNode);

    // Lặp qua hàng đợi
    while(!q.empty()){
        // Lấy một đỉnh từ hàng đợi và in ra
        int currentNode = q.front();
        q.pop();
        if(outStream.good())
            outStream << currentNode << " ";
        else
            cout << currentNode << " ";

        // Lấy tất cả các đỉnh kề của đỉnh được lấy ra khỏi hàng đợi
        // Nếu một đỉnh kề chưa được ghé thăm, đánh dấu và thêm vào hàng đợi
        for(int neighbor : adjList[currentNode]){
            if(!visited[neighbor]){
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

// Function to add an edge to the graph
void addEdge(vector<vector<int>>& adjList, int u, int v){
    adjList[u].push_back(v);
}

#endif