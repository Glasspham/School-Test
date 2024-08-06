#include<iostream>
#include<string>
using namespace std;
void deleteWord(string s, string s1){
    while(s.find(s1) != string::npos)
        s.replace(s.find(s1), s1.size(), "");
    cout << s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "Truong Dai Hoc Bach Khoa, Sai Gon";
    string s1 = "ai ";
    deleteWord(s,s1);
    return 0;
}