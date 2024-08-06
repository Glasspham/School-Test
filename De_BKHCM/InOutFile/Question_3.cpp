#include<iostream>
using namespace std;

using ll = long long;
void uppercase(string output){
    freopen(output.c_str(),"w",stdout);
    string s; cin >> s;
    for(char &c : s)
        if('a' <= c and c <= 'z')
            c -= 32;
    cout << s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "./output3.txt";
    uppercase(s);
    return 0;
}