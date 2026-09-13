#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Nhap so phan tu cua vector : ";
    cin >> n;
    vector<int> a(n);
    cout << "Nhap cac phan tu cua vector :\n";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    unordered_map<int,int> freq;
    for(int x : a) freq[x]++;
    cout << "Cac phan tu duy nhat : ";
    for(int x : a){
        if (freq[x] == 1) {
            cout << x << ' ';
        }
    }
    return 0;
}