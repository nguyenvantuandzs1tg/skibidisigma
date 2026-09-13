#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Nhap so phan tu cua vector : ";
    cin >> n;
    vector<int> a(n);
    cout << "Nhap cac phan tu:\n";
    for(int i = 0; i < n; i++)
        cin >> a[i];
    unordered_map<int,int> demsolanxuathien;
    for(int x : a) demsolanxuathien[x]++;
    vector<int> vectormoi;
    for(int x : a){
        if (demsolanxuathien[x] == 1){
            vectormoi.push_back(x);
        }
    }
    cout << "Vector sau khi loai bo phan tu trung lap : ";
    for(int x : vectormoi)
        cout << x << " ";
    cout << endl;
    return 0;
}