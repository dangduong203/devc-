#include <iostream>
#include <string.h>
using namespace std;
class DienLanh{
	public:	
	char tenhsx[30];
    int ma;
	float dg;
	DienLanh(){}
	DienLanh(char *tenhsx,int ma,float dg){
		strcpy(this->tenhsx,tenhsx);
		this->ma=ma;
		this->dg=dg;
	}
	~DienLanh(){}
	void NhapDL(){
	    cin.ignore();
		cout<<"Nhap ten hang san xuat:";
		cin.getline(tenhsx,30);
		cout<<"Nhap ma hang:";
		cin>>ma;
		cout<<"Nhap don gia:";
		cin>>dg;
	}
	void XuatDL(){
		cout<<"\nMa hang: "<<ma;
		cout<<"\nTen hang san xuat: "<<tenhsx;
		cout<<"\nDon gia: "<<dg;
    }
};
class TuLanh : public DienLanh{
	public:
		float dtich;
		float dienap;
		float trongluong;
	TuLanh(){};
	TuLanh(int ma,char *tenhsx,float dg,float dtich,float dienap,float trongluong) : DienLanh(ma,tenhsx,dg){
		this->dtich=dtich;
		this->dienap=dienap;
		this->trongluong=trongluong;
	}
	~TuLanh(){};
	friend istream & operator >> (istream &is,TuLanh &TL){
		TL.NhapDL();
		cin.ignore();
		cout<<"Nhap dung tich:";
		is>>TL.dtich;
		cout<<"Nhap dien ap:";
		is>>TL.dienap;
		cout<<"Nhap trong luong:";
		is>>TL.trongluong;
		return is;
	}
	float TinhTien(){
		if(trongluong>100){
			return 500000;
		}
		else if(trongluong>50){
			return 300000;
		}
		else {
			return 200000;
		}
	}
	friend ostream & operator <<(ostream &os, TuLanh &TL){
		TL.XuatDL();
		os<<"\nDung tich: "<<TL.dtich;
		os<<"\nDien ap: "<<TL.dienap;
		os<<"\nTrong luong: "<<TL.trongluong;
		return os;
	}
};
int main(){
	int n,m;
	cout<<"\nNhap so luong do dien lanh: ";
	cin>>n;
	DienLanh a[n];
	for(int i=0;i<n;i++){
		cout<<"\nDo dien lanh thu "<<i+1<<endl;
		a[i].NhapDL();
	}
	for(int i=0;i<n;i++){
		cout<<"\nDo dien lanh thu "<<i+1<<endl;
		a[i].XuatDL();
	}
	cout<<"\nNhap so luong tu lanh: ";
	cin>>m;
	TuLanh b[m];
	for(int i=0;i<m;i++){
		cout<<"Tu lanh thu "<<i+1<<endl;
		cin>>b[i];
	}
	cout<<"==========DANH SACH TU LANH CO DUNG TICH 500 LIT===========";
	for(int i=0;i<m;i++){
		if(b[i].dtich==500){
			cin>>b[i];
		}
	}
	return 0;
}
