#include <iostream>
#include <vector>
#include <string>
using namespace std;

using ll = long long;
int prefix[100][100];

void cumulative_array(int a[][1000], int row, int col) {
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j){
            prefix[i][j] = a[i][j];
            if (i > 0) prefix[i][j] += prefix[i - 1][j];
            if (j > 0) prefix[i][j] += prefix[i][j - 1];
            if (i > 0 && j > 0) prefix[i][j] -= prefix[i - 1][j - 1];
        }
    }
}

int subMatrix(int row, int col) {
    int cnt = 0;
    for(int i = 0; i < row - 1; ++i){
        for(int j = 0; j < col - 1; ++j){
            int total = prefix[i + 1][j + 1];
            if (i > 0) total -= prefix[i - 1][j + 1];
            if (j > 0) total -= prefix[i + 1][j - 1];
            if (i > 0 && j > 0) total += prefix[i - 1][j - 1];
            if (total % 2 != 0) ++cnt;
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[][1000] = {{66, 16, 71}, {25, 81, 61}, {2, 10, 34}};
    cumulative_array(arr, 3, 3);
    cout << subMatrix(3, 3);
    int arr[][1000] = {{44, 45, 89}, {82, 91, 34}, {83, 87, 33}, {65, 51, 66}};
    cumulative_array(arr, 4, 3);
    cout << subMatrix(4, 3);
    return 0;
}
