#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Nhap so phan tu cua vector : ";
    cin >> n;
    vector<int> a(n);
    cout << "Nhap cac phan tu cua vector : ";
    for(int i=0; i<n; i++)
        cin >> a[i];
    reverse(a.begin(), a.end());
    cout << "Vector sau khi dao : ";
    for(int x : a)
        cout << x << ' ';
    cout << endl;
    return 0;
}