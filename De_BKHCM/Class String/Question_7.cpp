#include <iostream>
#include <string>
using namespace std;
void findAllIndex(string s1, string s2){
    string res;
    auto idx = s1.find(s2);
    while(idx != string::npos){
        res += to_string(idx - 1) + ' ';
        s1.replace(idx, s2.size(), " ");
        idx = s1.find(s2);
    }
    cout << res;
}

int main(int argc, char *argv[]) {
    string s1 = "Truong Dai Hoc Bach Khoa.";
    string s2 = "a";
    findAllIndex(s1,s2);
}