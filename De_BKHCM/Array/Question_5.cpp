#include<iostream>
#include<vector>
#include<string>
using namespace std;

using ll = long long;

bool isPrime(int num){
    if(num <= 1) return false;
    if(num <= 3) return true;
    if(num % 2 == 0 || num % 3 == 0) return false;
    for(int i = 5; i * i <= num; i += 6)
        if(num % i == 0 || num % (i + 2) == 0)
            return false;
    return true;
}

int primeColumns(int arr[][1000], int row, int col){
    int cnt = 0;
    for(int i = 0; i < col; ++i){
        int sum = 0;
        for(int j = 0; j < row; ++j)
            sum += arr[j][i];
        if(isPrime(sum)) ++cnt;
    }
    return cnt; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[][1000] = {{-64,-28,-3,64}, {-56,90,57,-31}};
    cout << primeColumns(arr, 2, 4);
    return 0;
}