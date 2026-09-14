#include <bits/stdc++.h>
using namespace std;
vector<int> cong2vector(const vector<int>& v1, const vector<int>& v2) {
    size_t dodaivector = max(v1.size(), v2.size());
    vector<int> result(dodaivector, 0);
    for(size_t i = 0; i < v1.size(); i++) {
        result[i] += v1[i];
    }
    for(size_t i = 0; i < v2.size(); i++) {
        result[i] += v2[i];
    }
    return result;
}
int main() {
    int n, m;
    cout << "Nhap so phan tu cua vector 1 : ";
    cin >> n;
    cout << "Nhap cac phan tu cua vector 1 : ";
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    cout << "Nhap so phan tu cua vector 2 : ";
    cin >> m;
     cout << "Nhap cac phan tu cua vector 2 : ";
    vector<int> b(m);
    for(int i=0; i<m; i++)
        cin >> b[i];
    vector<int> tong = cong2vector(a, b);
    cout << "Vector moi sau khi cong 2 vector : ";
    for (int x : tong) {
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}