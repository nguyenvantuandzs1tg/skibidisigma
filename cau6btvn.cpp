#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Nhap so phan tu cua vector 1 : ";
    cin >> n;
    vector<int> vector1(n);
    cout << "Nhap cac phan tu cua vector 1 :\n";
    for(int i=0; i<n; i++){
        cin >> vector1[i];
    }
    int m;
    cout << "Nhap so phan tu cua vector 2 : ";
    cin >> m;
    vector<int> vector2(m);
    cout << "Nhap cac phan tu cua vector 2 :\n";
    for(int j=0; j<m; j++){
        cin >> vector2[j];
    }
    vector<int> vectorghep = vector1;
    vectorghep.insert(vectorghep.end(), vector2.begin(), vector2.end());
    cout << "Vector sau khi ghep la : ";
    for(int x : vectorghep)
        cout << x << ' ';
    cout << endl;
}
