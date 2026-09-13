#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Nhap so phan tu cua vector : ";
    cin >> n;
    vector <int> a(n);
    cout << "Nhap cac phan tu cua vector : ";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << "Vector thu duoc gom cac phan tu : ";
    for(int show1 : a)
        cout << show1 << endl;
    cout << endl;
    int x;
    cout << "Nhap phan tu x muon xoa : ";
    cin >> x;
    a.erase(remove(a.begin(), a.end(), x), a.end());
    cout << "Cac phan tu cua vector sau khi xoa cac phan tu x : ";
    for(int show2 : a)
        cout << show2 << ' ';
    cout << endl;
    return 0;
}