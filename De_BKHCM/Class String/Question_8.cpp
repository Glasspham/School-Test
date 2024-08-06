#include <iostream>
#include <string>
using namespace std;
void cutString(string s, string index){
    cout << s.substr(7);
}

int main(int argc, char *argv[]) {
    string s1 = "Truong Dai Hoc Bach Khoa.";
    string s2 = "a";
    cutString(s1,s2);
}