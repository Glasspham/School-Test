#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

using ll = long long;

void calMoney(string price, string buy){
    int a[21] = {0};
    ifstream Price(price);
    int n, i, value;
    Price >> n;
    while(Price >> i >> value)
        a[i] = value;
    Price.close();

    ifstream Buy(buy);
    int t; Buy >> t;
    Buy.ignore();
    string s;
    while(getline(Buy, s)){
        istringstream iss(s);
        string name; iss >> name;
        int i, value, res = 0;
        while (iss >> i >> value)
            res += value * a[i];
        cout << name << ' ' << res << endl;
    }
    Buy.close();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string price = "./price.txt";
    string buy = "./buy.txt";
    calMoney(price, buy);
    return 0;
}
