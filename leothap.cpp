#include <bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));
    int sotang1 = rand() % 100;
    int doan1;
    int solandoan1 = 0;
    cout << "Chao mung cau chu den voi tro choi leo thap !";
    cout << "\nHay tim ra con so bi mat de tim thay chia khoa mo canh cua den voi tang tiep theo.";
    cout << "\n(Tang 1 co 100 con so bi mat, Tang 2 co 50 con so bi mat, Tang 3 co 10 con so bi mat)";
    cout << "\nPhan thuong thu vi dang cho cau chu o tren dinh thap !";
    cout << "\nChuc cau chu may man !!!";
    cout << "\nTANG 1";
    vector<int> a;
    a.push_back(doan1);
    while (true) {
        solandoan1++;
        cout << "\nLan doan " << solandoan1 << ": ";
        cin >> doan1;
        if(doan1 < sotang1){
            cout << "So ban doan nho hon so bi mat !\n";
            a.push_back(doan1);
        }
        else if(doan1 > sotang1){
            cout << "So ban doan lon hon so bi mat !\n";
            a.push_back(doan1);
        }
        else if(doan1 == sotang1){
            cout << "Chuc mung cau chu da vuot qua tang 1 !!!\n";
            break;
        }
    }
    cout << "Cau chu da doan dung sau " << solandoan1 << " lan doan";
    cout << "\nCac so cau chu da doan sai : ";
    for (int num1 : a) {
        cout << num1 << " ";
    }
    cout << endl;
    cout << "TANG 2";
    int sotang2 = rand() % 50;
    int doan2;
    int solandoan2 = 0;
    vector<int> b;
    a.push_back(doan2);
    while (true) {
        solandoan2++;
        cout << "\nLan doan " << solandoan2 << ": ";
        cin >> doan2;
        if(doan2 < sotang2){
            cout << "So ban doan nho hon so bi mat !\n";
            b.push_back(doan2);
        }
        else if(doan2 > sotang2){
            cout << "So ban doan lon hon so bi mat !\n";
            b.push_back(doan2);
        }
        else if(doan2 == sotang2){
            cout << "Chuc mung cau chu da vuot qua tang 2!!!\n";
            break;
        }
    }
    cout << "Cau chu da doan dung sau " << solandoan2 << " lan doan";
    cout << "\nCac so cau chu da doan sai : ";
    for(int num2 : b){
        cout << num2 << " ";
    }
    cout << endl;
    cout << "TANG 3";
    int sotang3 = rand() % 10;
    int doan3;
    int solandoan3 = 0;
    vector<int> c;
    a.push_back(doan3);
    while (true) {
        solandoan3++;
        cout << "\nLan doan " << solandoan3 << ": ";
        cin >> doan3;
        if(doan3 < sotang3){
            cout << "So ban doan nho hon so bi mat !\n";
            c.push_back(doan3);
        }
        else if(doan3 > sotang3){
            cout << "So ban doan lon hon so bi mat !\n";
            c.push_back(doan3);
        }
        else if(doan3 == sotang3){
            cout << "Chuc mung cau chu da den tang cao nhat !!!\n";
            break;
        }
    }
    cout << "Cau chu da doan dung sau " << solandoan3 << " lan doan";
    cout << "\nCac so cau chu da doan sai : ";
    for(int num3 : c){
        cout << num3 << " ";
    }
    cout << endl;
    cout << "Cau chu da gianh duoc phan qua bi mat la 1 cai nit !!!";
    return 0;
}