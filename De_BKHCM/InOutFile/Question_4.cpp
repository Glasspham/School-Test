#include<iostream>
using namespace std;

using ll = long long;
void process(string fileName){
    freopen(fileName.c_str(),"r",stdin);
    int n, m, i = 0; cin >> n >> m;
    float num, max_curr = INT_MIN, max = INT_MIN;
    while(cin >> num){
        i++;
        if(num > max_curr) max_curr = num;
        if(num > max) max = num;
        if(i == m){
            i = 0;
            cout << max_curr << ' ';
            max_curr = INT_MIN;
        }
    }
    cout << max;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "./input4.txt";
    process(s);
    return 0;
}