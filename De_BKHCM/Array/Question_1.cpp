#include<iostream>
#include<climits>
using namespace std;

using ll = long long;

int findMaxColumn(int arr[][1000], int row, int col){
    int idx = -1, longest_sum = 0;
    for(int i = 0; i < col; ++i){
        int sum_curr = 0;
        for(int j = 0; j < row; ++j) sum_curr += arr[j][i];
        if(longest_sum < sum_curr){
            idx = i;
            longest_sum = sum_curr;
        }
    }
    return idx;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[][1000] = {{-44, 64, -6}, {87, 92, -19}, {-92, 53, -38}, {-39, -92, 21}};
    cout << findMaxColumn(arr, 4, 3);
    return 0;
}