#include<iostream>
using namespace std;
void threeChars(string fileName){
    freopen(fileName.c_str(), "r", stdin);
    string s;
    while(cin >> s){
        if(s == "***") return;
        if(s[0] <= s[1] and s[1] <= s[2])
            cout << "True\n";
        else cout << "False\n";
    }
}

int main(){
    string s = "./input1.txt";
    threeChars(s);
}