#include<iostream>
#include<string.h>
using namespace std;
class ptgt{
	public:
		char hangsx[20];
		int namsx;
		int giachuathue;
	ptgt(){}
	ptgt(char* hangsx,int namsx,int giachuathue){
		strcpy(this->hangsx,hangsx);
		this->namsx=namsx;
		this->giachuathue=giachuathue;
	}
	~ptgt(){}
	void nhap(){
		cin.ignore();
		cout<<"-Nhap Hang SX : ";
		cin.getline(hangsx,20);
		cout<<"-Nhap Nam SX : ";
		cin>>namsx;
		cout<<"-Nhap Gia Chua Thue : ";
		cin>>giachuathue;
		cout<<endl;
	}
	void xuat(){
		cout<<"\n-Hang SX : "<<hangsx
		    <<"\n-Nam SX : "<<namsx
		    <<"\nGia Chua Thue : "<<giachuathue<<endl;
	}
	float getgiachuathue(){
		return this->giachuathue;
	}	
};
class xekhach : public ptgt{
	public:
		int sotuyen;
		int soghe;
		float giasauthue;
	xekhach(){}
	xekhach(int sotuyen,int soghe,char* hangsx,int namsx,int giachuathue) : ptgt(hangsx,namsx,giachuathue){
		this->sotuyen=sotuyen;
		this->soghe=soghe;
	}
	~xekhach(){}
	friend istream& operator >> (istream&is , xekhach &xk){
		xk.nhap();
		cout<<"-Nhap So Tuyen : ";
		is>>xk.sotuyen;
		cout<<"-Nhap So Ghe : ";
		is>>xk.soghe;
		return is;
	}
	float gianganhsauthue(){
		return getgiachuathue() + getgiachuathue() * 0.08;
	}
	friend ostream& operator <<(ostream&os ,xekhach xk){
		xk.xuat();
		os<<"\n-So Tuyen :"<<xk.sotuyen
		  <<"\n-So Ghe : "<<xk.soghe
		  <<"\n-Gia Sau Thue : "<<xk.gianganhsauthue()<<endl;
	}	
};
int main(){
	int n;
	cout<<"Nhap So PTGT : ";
	cin>>n;
	ptgt a[n];
	for(int i=0;i<n;i++){
		cout<<"\tNhap PTGT Thu "<<i+1<<endl;
		a[i].nhap();
	}
	for(int i=0;i<n;i++){
		cout<<"\tThong Tin PTGT Thu "<<i+1<<" : ";
		a[i].xuat();
	}
	int m;
	cout<<"\nNhap So Xe Khach : ";
	cin>>m;
	xekhach b[m];
	for(int i=0;i<m;i++){
		cout<<"\tNhap Xe Khach Thu "<<i+1<<endl;
		cin>>b[i];
	}
	for(int i=0;i<m;i++){
		cout<<"\tThong Tin Xe Khach Thu "<<i+1<<endl;
		cout<<b[i];
	}
	cout<<"\t---THONG TIN XE KHACH SO GHE > 29---"<<endl;
	for(int i=0;i<m;i++){
		if(b[i].soghe>29){
			cout<<"\n\tThong Tin Xe Khach Thu "<<i+1;
			cout<<b[i];
		}
	}
}
