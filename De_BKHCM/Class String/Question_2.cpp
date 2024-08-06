#include<iostream>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int j = 0, value_max = 0;
    for(int i = 0; i < s.size(); ++i){
        while(s[i] != s[j]) ++j;
        if(s[i] == s[j])
            if(i - j + 1 > value_max)
                value_max = i - j + 1;
    }
    cout << value_max;
    return 0;
}