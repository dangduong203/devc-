#include<iostream>
using namespace std;
void NhapMangPhanSo(int n, int a[], int b[]) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan so thu " << i+1 << ": ";
        cin >> a[i] >> b[i];
    }
}
void XuatMangPhanSo(int n, int a[], int b[]) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << "/" << b[i] << " ";
    }
}
void TimPhanSoNhoNhat(int n, int a[], int b[]) {
    int min = 0;
    for (int i = 1; i < n; i++) {
        if ((double)a[i]/b[i] < (double)a[min]/b[min]) {
            min = i;
        }
    }
    cout << "Phan so nho nhat la: " << a[min] << "/" << b[min];
}
int main() {
    int n;
    cout << "Nhap so luong phan so: ";
    cin >> n;
    int a[n], b[n];
    NhapMangPhanSo(n, a, b);
    cout << "Mang phan so vua nhap la: ";
    XuatMangPhanSo(n, a, b);
    cout << endl;
    TimPhanSoNhoNhat(n, a, b);
    return 0;
}
