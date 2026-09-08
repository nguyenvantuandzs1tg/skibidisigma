#include <bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));
    int luckynumber = rand() % 100;
    int doan;
    int solandoan = 0;
    cout << "Chuc cau chu may man !!!";
    vector<int> a;
    a.push_back(doan);
    while (true) {
        solandoan++;
        cout << "\nLan doan " << solandoan << ": ";
        cin >> doan;
        if(doan < luckynumber){
            cout << "So ban doan nho hon LuckyNumber !\n";
            a.push_back(doan);
        }
        else if(doan > luckynumber){
            cout << "So ban doan lon hon LuckyNumber !\n";
            a.push_back(doan);
        }
        else if(doan == luckynumber){
            cout << "Chuc mung cau chu thang lon !!!\n";
            break;
        }
    }
    cout << "Cac so da doan sai :";
    for(int k : a){
            cout << k << " ";
    }
    cout << endl;
    return 0;
}