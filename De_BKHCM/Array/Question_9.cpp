#include <iostream>
#include <vector>
#include <string>
using namespace std;

using ll = long long;
void printImage(int img[][1000], int N){
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j)
            cout << img[i][j] << ' ';
        cout << endl;
    }
}

void rotateImage(int img[][1000], int N){
    vector<vector<int>> tmp;
    for(int i = 0; i < N; ++i){
        vector<int> tmp2;
        for(int j = N - 1; j >= 0; --j)
            tmp2.push_back(img[j][i]);
        tmp.push_back(tmp2);
    }
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < N; ++j)
            img[i][j] = tmp[i][j];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int img[][1000] = {{1,2,3},{4,5,6},{7,8,9}};
    rotateImage(img, 3);
    printImage(img,3);
    return 0;
}