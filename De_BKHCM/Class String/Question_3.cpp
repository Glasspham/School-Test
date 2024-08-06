#include<iostream>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int check[256] = { 0};
    string s; cin >> s;
    int j = 0, res = 0;
    for(int i = 0; i < s.size(); ++i){
        check[s[i]]++;
        while(check[s[i]] > 1){
            check[s[j]]--;
            ++j;
        }
        res = max(res, i - j + 1);
    }
    cout << res;
    return 0;
}