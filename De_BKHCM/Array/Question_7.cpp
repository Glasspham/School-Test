#include<iostream>
#include<vector>
#include<string>
using namespace std;

using ll = long long;

int diagonalDiff(int arr[][1000], int row, int col, int x, int y){
    int main_diagonal = 0;
    int secondary_diagonal = 0;

    for(int i = 1; i < max(row, col); i++){
        if (x - i >= 0 && y - i >= 0)
            main_diagonal += arr[x - i][y - i];
        if (x + i < row && y + i < col)
            main_diagonal += arr[x + i][y + i];
        if (x - i >= 0 && y + i < col)
            secondary_diagonal += arr[x - i][y + i];
        if (x + i < row && y - i >= 0)
            secondary_diagonal += arr[x + i][y - i];
    }

    return abs(main_diagonal - secondary_diagonal);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[][1000] = {{55,85,47,58},{31,4,60,67},{94,69,71,73},{51,62,64,90}};
    cout << diagonalDiff(arr, 4, 4, 2, 2);
    return 0;
}