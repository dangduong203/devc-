#include <iostream.h>
#include <iomanip.h>
struct sanpham{ 
      char masp[15];
      char tensp[30];
      int soluong;
      float dongia;
};

void nhap(sanpham a[], int n){    
    for(int i=0;i<n;i++){      
	cin.ignore();
    cout<<"\nNhap san pham thu "<<i+1<<endl;
    cout<<"Ma san pham:";cin.getline(a[i].masp,15);
    cout<<"Ten san pham:";
    cin.getline(a[i].tensp,30);
    cout<<"So luong san pham:";cin>>a[i].soluong;
    cout<<"Don gia san pham:";cin>>a[i].dongia;
 }
}
void tieude(){
	cout<<"\t\t---DANH SACH SAN PHAM---"<<endl;
    cout<<setw(15)<<"Ma san pham";
    cout<<setw(30)<<"Ten san pham";
    cout<<setw(15)<<"So luong";
    cout<<setw(15)<<"Don gia"<<endl;
}
void xuat(sanpham a[], int n){
      tieude();
      for (int i=0;i<n;i++)
{
          cout<<setw(15)<<a[i].masp;
          cout<<setw(30)<<a[i].tensp;
          cout<<setw(15)<<a[i].soluong;
          cout<<setw(15)<<a[i].dongia<<endl;
}
}
void xuat1sp(){
	cout<<"\t\t---DANH SACH SAN PHAM DUOI 20000 LA---"<<endl;
    cout<<setw(15)<<"Ma san pham";
    cout<<setw(30)<<"Ten san pham";
    cout<<setw(15)<<"So luong";
    cout<<setw(15)<<"Don gia"<<endl;
}
void spduoi20000(sanpham a[], int n){
     xuat1sp();
     for(int i=0;i<n;i++)
       if (a[i].dongia <= 20000)
 {  
          cout<<setw(15)<<a[i].masp;
          cout<<setw(30)<<a[i].tensp;
          cout<<setw(15)<<a[i].soluong;
          cout<<setw(15)<<a[i].dongia<<endl;
 }
} 
int main()
{  
    sanpham a[50];
    int n;
    cout<<"Nhap so san pham: ";cin>>n;
    nhap(a, n);
    xuat(a, n);
    spduoi20000(a, n);
    return 0;
}
