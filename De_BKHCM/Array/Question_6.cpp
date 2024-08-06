#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int specialCells(int arr[][1000], int row, int col){
    vector<int> rowSum(row, 0);
    vector<int> colSum(col, 0);

    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            rowSum[i] += arr[i][j];
            colSum[j] += arr[i][j];
        }
    }

    int count = 0;
    for(int i = 0; i < row; ++i)
        for(int j = 0; j < col; ++j)
            if(isPrime(rowSum[i]) && isPrime(colSum[j]))
                count++;
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[][1000] = {{37, 53, 74}, {12, 37, 60}, {98, 13, 15}};
    cout << specialCells(arr, 3, 3) << endl;
    return 0;
}