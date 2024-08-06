#include <iostream>
#include <vector>
#include <string>
using namespace std;

using ll = long long;


void printSpira(int arr[][1000], int row, int col){
    int top = 0, bottom = row - 1, left = 0, right = col - 1;

    // Traverse from left to right
    for(int i = left; i <= right; ++i)
        cout << arr[top][i] << ' ';
    top++;
    
    // Traverse from top to bottom
    for(int i = top; i <= bottom; ++i) 
       cout << arr[i][right] << ' ';
    right--;
    
    // Traverse from right to left
    for(int i = right; i >= left; --i) 
        cout << arr[bottom][i] << ' ';
    bottom--;
    
    // Traverse from bottom to top
    for(int i = bottom; i >= top; --i) 
      cout << arr[i][left] << ' ';
    left++;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int arr[][1000] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr[][1000] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    printSpira(arr, 3, 4);
    return 0;
}