#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
class  Tau {
private:
    char hang[20];
    float trongTai;
    int soTang;
    char mauSac[10];
public:
    Tau() {}
    Tau(char* Hang, float trongtai, int sotang, char* mau) {
        strcpy(this->hang, Hang);
        this->trongTai = trongtai;
        this->soTang = sotang;
        strcpy(mauSac, mau);
    }
    ~Tau() {}
    friend istream& operator >> (istream& is, Tau& a) {
        cin.ignore();
        cout << "\n|| Nhap Hang San Xuat: "; is.getline(a.hang, 20);
        cout << "|| Nhap Trong Tai (Tan): "; is >> a.trongTai;
        cout << "|| Nhap So Tang: "; is >> a.soTang;
        is.ignore();
        cout << "||Nhap Mau Sac: "; is >> a.mauSac;
        return is;
    }
    friend ostream& operator <<(ostream& os, Tau a) {
        os << "|" << setw(15) << a.hang
            << "|" << setw(20) << a.trongTai
            << "|" << setw(20) << a.soTang
            << "|" << setw(15) << _strupr(a.mauSac)
            << "|";
        return os;
    }
    float getTrongTai() {
        return this->trongTai;
    }
    char* getHang()
    {
        return this->hang;
    }
};
void kebang() {
    cout << "\n";
    for (int i = 0; i < 80; i++) {
        cout << "-";
    }
    cout << endl;
}
void tieuDe() {
    kebang();
    cout << "|" << setw(4) << "STT"
        << "|" << setw(15) << "Ten Hang"
        << "|" << setw(20) << "Trong Tai"
        << "|" << setw(20) << "So Tang"
        << "|" << setw(15) << "Mau Sac"
        << "|";
    kebang();

}
void NhapTT(Tau* a, int& n) {
    for (int i = 0; i < n; i++) {
        cout << "- Nhap thong tin Tau thu " << i + 1 << endl;
        cin >> a[i];
    }

}
void TimKiem(Tau* a, int n) {
    cout << "\n===== Danh Sach Cac Tau Cua Hang Vinasun =====" << endl;
    int dem = 1;
    tieuDe();
    for (int i = 0; i < n; i++) {
        if (strstr(_strlwr(a[i].getHang()), "vinasun")) {
            cout << "|" << setw(4) << dem << a[i];
            kebang();
        }

    }
}
void xuatCoTrongTaiLonHon50(Tau* a, int n) {
    cout << "\n====== Danh Sach Tau Co Trong Tai > 10 && < 50 ========" << endl;
    tieuDe();
    int dem = 1;
    for (int i = 0; i < n; i++) {
        if (a[i].getTrongTai() > 10 && a[i].getTrongTai() < 50) {
            cout << "|" << setw(4) << dem << a[i];
            kebang();
            dem++;
        }
    }
}
void DanhSachTauSauKhiSapXep(Tau* a, int n) {
    cout << "\n====== Danh Sach Tau Sau Khi Sap Xep ========" << endl;
    tieuDe();
    int dem = 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].getTrongTai() > a[j].getTrongTai()) {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "|" << setw(4) << dem << a[i];
        kebang();
        dem++;
    }

}



int main() {
    Tau* a;
    int n;
    cout << "Nhap So Luong Tau: "; cin >> n;

    a = new Tau[n];
    NhapTT(a, n);
    TimKiem(a, n);
    xuatCoTrongTaiLonHon50(a, n);
    DanhSachTauSauKhiSapXep(a, n);
    delete[]a;
    return  0;
}