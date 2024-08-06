#include<iostream>
#include<string>
using namespace std;

using ll = long long;

bool isSymmetric(int arr[][1000], int row, int col){
    for(int i = 0; i < row; ++i)
        for(int j = 0; j < col; ++j)
            if(arr[i][j] != arr[j][i])
                return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[][1000] = {{1,4,6}, {4,5,3}, {6,3,9}};
    cout << isSymmetric(arr, 3, 3);
    return 0;
}