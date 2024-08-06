#include<iostream>
#include<string>
using namespace std;

using ll = long long;

int ascendingRows(int arr[][1000], int row, int col){
    int cnt = 0; 
    for(int i = 0; i < row; ++i){
        bool f = true;
        for(int j = 0; j < col - 1; ++j){
            if(arr[i][j] > arr[i][j + 1]){
                f = false;
                break;
            }
        }
        if(f) ++cnt;
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[][1000] = {{32,4,9}, {-80,37,71}, {-91,-79,-55}};
    cout << ascendingRows(arr, 3, 3);
    return 0;
}