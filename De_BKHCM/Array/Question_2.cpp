#include<iostream>
#include<string>
using namespace std;

using ll = long long;
// Cần test để xem cần sửa dữ liệu hay không
int diagonalProduct(int arr[][1000], int row, int col){
    int accumulation = 1;
    for(int i = 0; i < row; ++i) accumulation *= arr[i][i];
    return accumulation;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[][1000] = {{-45, 18, -37}, {-2, -31, 24}, {-48, -33, -48}};
    cout << diagonalProduct(arr, 3, 3);
    return 0;
}