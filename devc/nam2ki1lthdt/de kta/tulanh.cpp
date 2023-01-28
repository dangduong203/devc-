#include<iostream>
#include<string.h>
using namespace std;
class dienlanh{
	public :
		char hangsx[20];
		int ma;
		int dongia;
	dienlanh(){}
	dienlanh(char* hangsx,int ma,int dongia){
		strcpy(this->hangsx,hangsx);
		this->ma=ma;
		this->dongia=dongia;
	}	
	~dienlanh(){}
	void nhap(){
		cin.ignore();
		cout<<"Nhap Hang SX : ";
		cin.getline(hangsx,20);
		cout<<"Nhap Ma Hang : ";
		cin>>ma;
		cout<<"Nhap Don Gia : ";
		cin>>dongia;
		cout<<endl;
	}
	void xuat(){
		cout<<"\nHang SX : "<<hangsx
		    <<"\nMa Hang : "<<ma
		    <<"\nDon Gia : "<<dongia<<endl;
	}
};
class tulanh : public dienlanh{
	public :
		int dtich;
		int dienap;
		int tluong;
	tulanh(){}
	tulanh(int dtich,int dienap,int tluong,char* hangsx,int ma,int dongia) : dienlanh(hangsx,ma,dongia){
		this->dtich=dtich;
		this->dienap=dienap;
		this->tluong=tluong;
	}
	~tulanh(){}
	friend istream& operator>>(istream& is , tulanh& tl){
	    tl.nhap();
		cin.ignore();
		cout<<"Nhap Dung Tich : ";
		is>>tl.dtich;
		cout<<"Nhap Dien ap : ";
		is>>tl.dienap;
		cout<<"Nhap Trong luong : ";
		is>>tl.tluong;
		return is;
		
}
	float tinhtien(){
		if(tluong>100){
			return 500000;
		}
		else if(tluong>50 && tluong<100){
			return 300000;
		}
		else{
			return 200000;
		}
	}
	friend ostream& operator << (ostream&os , tulanh tl){
		tl.xuat();
		os<<"\nDung Tich : "<<tl.dtich
		  <<"\nDien Ap : "<<tl.dienap
		  <<"\nTrong Luong : "<<tl.tinhtien()<<endl;
		  cout<<endl;
		  return os;
	}	
};
int main(){
	int n ;
	cout<<"Nhap so do dien lanh : ";
	cin>>n;
	dienlanh a[n];
	for(int i=0;i<n;i++){
		cout<<"\nNhap do dien lanh thu "<<i+1<<endl;
		a[i].nhap();
	}
	for(int i=0;i<n;i++){
		cout<<"\nThong tin do dien lanh thu "<<i+1<<endl;
		a[i].xuat();
	}
	int m;
	cout<<"Nhap so tu lanh : ";
	cin>>m;
	tulanh b[m];
	for(int i=0;i<m;i++){
		cout<<"\nNhap tu lanh thu "<<i+1<<endl;
		cin>>b[i];
	}
	for(int i=0;i<m;i++){
		cout<<"Thong tin tu lanh thu "<<i+1<<endl;
		cout<<b[i];
	}
	
	cout<<"---Danh Sach Tu Lanh Co Dung Tich 500 Lit---";
	for(int i=0;i<m;i++){
		return(b[i].dtich == 500){
			cout<<b[i];
		}		
	}
}
	
