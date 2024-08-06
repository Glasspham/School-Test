#include<iostream>
using namespace std;

using ll = long long;
void studendGrading(string fileName){
    freopen(fileName.c_str(),"r",stdin);
    int N; cin >> N;
    float NMDT, KTLT, DSA, PPL;
    int loaiA  = 0, loaiB = 0, loaiC = 0, loaiD = 0;
    while(cin >> NMDT >> KTLT >> DSA >> PPL){
        float dtb = (NMDT + KTLT + DSA + PPL) / 4;
        if(dtb >= 8 and NMDT >= 5 and KTLT >= 5 and DSA >= 5 and PPL >= 5) ++loaiA;
        else if(dtb >= 6.5 and NMDT >= 5 and KTLT >= 5 and DSA >= 5 and PPL >= 5) ++loaiB;
        else if(dtb >= 5 and NMDT >= 5 and KTLT >= 5 and DSA >= 5 and PPL >= 5) ++loaiC;
        else ++loaiD;
    }
    cout << "A " << loaiA << endl; 
    cout << "B " << loaiB << endl; 
    cout << "C " << loaiC << endl; 
    cout << "D " << loaiD << endl; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "./input5.txt";
    studendGrading(s);
    return 0;
}