#include<iostream>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; getline(cin,s);
    string word, res;
    for(int i = s.size() - 1; i >= 0; --i){
        if(isalpha(s[i])) word = s[i] + word;
        if(s[i] == ' '){
            res += word;
            res += s[i];
            word = "";
        }
    }
    return 0;
}