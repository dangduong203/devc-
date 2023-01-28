#include<iostream>
using namespace std;
class HangHoa{
private:
char ma[30] , ten[30] ;
int soLuong;
float donGia;
public:
void Nhap(){
    cin.ignore();
    cout<<"\nNhap Ma Hang Hoa: ";cin.getline(ma,30);
    cout<<"Nhap Ten Hang Hoa: ";cin.getline(ten,30);
    cout<<"Nhap So Luong: ";cin>>soLuong;
    cout<<"Nhap Don Gia: " ; cin>>donGia;
}
float ThanhTien(){
    return soLuong * donGia;
}
void Xuat(){
    cout<<"\nMa HANg Hoa: "<<ma
    <<"\nTen Hang Hoa: "<<ten
    <<"\nSo Luong: "<<soLuong 
    <<"\nDon Gia: "<<donGia 
    <<"\nnThanh Tien: "<<ThanhTien();
}
friend void Xuat50(HangHoa a[] , int n) {
    cout<<"\n Cac Loai Hang Hoa Thanh Tien > 50 La: "<<endl;
    for(int i = 0; i<n ;i++){
        if(a[i].ThanhTien() > 50){
            a[i].Xuat();
        }
    }
}
}; 

int main(){
HangHoa *a; int n;
cout<<"Nhap so loai hang hoa: ";cin>>n;
a = new HangHoa[n];
for(int i = 0 ; i< n;i++){
    cout<<"\n-Nhap thong tin loai hang hoa thu "<<i+1<<endl;
    a[i].Nhap();
}    
Xuat50(a,n);
    return 0;
}
