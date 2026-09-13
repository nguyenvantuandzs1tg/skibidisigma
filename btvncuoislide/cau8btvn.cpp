#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Nhap so phan tu cua 2 vector : ";
    cin >> n;
    vector<int> vector1(n), vector2(n), tong(n);
    cout << "Nhap cac phan tu vector 1 :\n";
    for(int i = 0; i < n; i++)
        cin >> vector1[i];
    cout << "Nhap cac phan tu vector 2 :\n";
    for(int i = 0; i < n; i++)
        cin >> vector2[i];
    for(int i = 0; i < n; i++){
        tong[i] = vector1[i] + vector2[i];
    }
    cout << "Vector tong sau khi cong 2 vector : ";
    for(int x : tong)
        cout << x << " ";
    cout << endl;
    return 0;
}