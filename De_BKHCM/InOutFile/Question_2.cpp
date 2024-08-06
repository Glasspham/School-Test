#include<iostream>
using namespace std;
void calSum(string fileName){
    freopen(fileName.c_str(), "r", stdin);
    int number, sum = 0;
    while(cin >> number) sum += number;    
    cout << sum;
}

int main(){
    string s = "./input2.txt";
    calSum(s);
}