#include<iostream>
#include<string>
using namespace std;

string AroundCenter(string s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) 
        left--,right++;
    return s.substr(left + 1, right - left - 1);
}

string longestSubstring(string s) {
    if (s.empty()) return "";
    string longest;
    for(int i = 0; i < s.length(); ++i) {
        string oddstring = AroundCenter(s, i, i);
        string evenstring = AroundCenter(s, i, i + 1);
        if(oddstring.length() > longest.length()) longest = oddstring;
        if(evenstring.length() > longest.length()) longest = evenstring;
    }
    return longest;
}

int main() {
    string s; cin >> s;
    cout << longestSubstring(s);
    return 0;
}
