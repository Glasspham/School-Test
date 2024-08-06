#include<iostream>
#include<string>
using namespace std;

void replaceString(string s, string s1, string s2){
    while(s.find(s1) != string::npos)
        s.replace(s.find(s1),s1.size(),s2);
    cout << s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "Truong Dai Hoc Bach Khoa, Sai Gon";
    string s1 = "ai";
    string s2 = "ong";
    replaceString(s,s1,s2);
    return 0;
}