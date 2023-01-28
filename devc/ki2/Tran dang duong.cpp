#include<iostream.h> 
#include<iomanip.h>
using namespace std;

struct quanly
{
	char MaH[10];
	char TenCH[30];
	int SoTV, MucTN, TroCap;
};

void nhap(quanly a[], int &n)
{ 
	for(int i=0; i<n; i++){
	   cin.ignore();
	   cout<<"\tNhap ho dan thu "<<i+1<<endl;
	   cout<<"Nhap ma ho dan:";
	   cin.getline(a[i].MaH,10);
	   cout<<"Nhap ten chu ho:";
	   cin.getline(a[i].TenCH,30);
	   cout<<"Nhap so thanh vien:";
	   cin>>a[i].SoTV;
	   cout<<"Nhap muc thu nhap:";
	   cin>>a[i].MucTN;	
		
	}
}

void tinhTC(quanly a[], int n)
{
	for(int i=0; i<n; i++){
		if(a[i].MucTN>5000000){
			a[i].TroCap=50000*a[i].SoTV;
		}
		else if(a[i].MucTN>3000000){
			a[i].TroCap=100000*a[i].SoTV;
		}
		else{
			a[i].TroCap=200000*a[i].SoTV;
		}
	}
}

void tieude(){
	cout<<setw(10)<<"MA HO"
		<<setw(30)<<"TEN CHU HO"
		<<setw(25)<<"SO THANH VIEN"
		<<setw(25)<<"MUC THU NHAP"
		<<setw(25)<<"TRO CAP/1 NGUOI"<<endl;
}

void xuat(quanly a[], int n)
{
	cout<<endl;
	cout<<setw(70)<<"---DANH SACH HO DAN--- "<<endl;
	tieude();
	for(int i=0; i<n; i++){
		cout<<setw(10)<<a[i].MaH
		    <<setw(30)<<a[i].TenCH
	        <<setw(25)<<a[i].SoTV
		    <<setw(25)<<a[i].MucTN
		    <<setw(25)<<a[i].TroCap<<endl;
	}
	
}

void sap_xep(quanly a[], int &n)
{
	cout<<endl;
	cout << "\t\t\t---DANH SACH THANH VIEN SAP XEP THEO THU TU TANG DAN--- "<<endl;
	tieude();
	for(int i=0; i<n;i++){
		for(int j=i+1;j<n;j++){ 
			if(a[i].SoTV>a[j].SoTV){
				quanly tg=a[i]; 
				a[i]=a[j];
				a[j]=tg;
			}
			
		}	
	}
	for(int i=0; i<n; i++){
		cout<<setw(10)<<a[i].MaH
		    <<setw(30)<<a[i].TenCH
		    <<setw(25)<<a[i].SoTV
		    <<setw(25)<<a[i].MucTN
		    <<setw(25)<<a[i].TroCap<<endl;
	}
	cout<<endl;
}
int main()
{
	int n;
	quanly a[1000];
	cout<<"Nhap so ho dan:";
	cin>>n;
	nhap(a,n);
	tinhTC(a,n);
	xuat(a,n);
	sap_xep(a,n);
}