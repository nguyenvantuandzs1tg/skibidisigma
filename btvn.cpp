#include <bits/stdc++.h>
using namespace std;
bool kiemtra(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
int dem(const vector<int>& a) {
    int count = 0;
    for (int num : a) {
        if (kiemtra(num)) {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    vector<int> a(n);
    cout << "Nhap danh sach " << n << " so nguyen:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ketqua = dem(a);
    cout << "So luong so nguyen to trong danh sach: " << ketqua << endl;
    return 0;
}