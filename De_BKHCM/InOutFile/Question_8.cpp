#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstddef> 

using namespace std;

size_t check_spelling(string text);

void test(string filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    string line, description, expectStr, content;
    size_t expect;

    getline(file, line); 

    getline(file, line);
    description = line.substr(line.find(": ") + 2);

    getline(file, line);
    expectStr = line.substr(line.find(": ") + 2);
    expect = (expectStr == "npos") ? string::npos : stoi(expectStr);

    getline(file, line);

    getline(file, content, '\0'); 

    file.close();

    size_t result = check_spelling(content);

    string testNumber = filename.substr(filename.find("testcase") + 8);
    testNumber = testNumber.substr(0, testNumber.find(".txt"));

    if (result == expect) {
        cout << "ok " << testNumber << " - " << description << endl;
    } else {
        cout << "not ok " << testNumber << " - " << description << endl;
        cout << "  ---" << endl;
        cout << "  expected: " << (expect == string::npos ? "npos" : to_string(expect)) << endl;
        cout << "       got: " << (result == string::npos ? "-1" : to_string(result)) << endl;
        cout << "  ---" << endl;
    }
}


int main() {
    std::string s = "input8.txt";
    test(s);
    return 0;
}
