//xay dung 1 lop phuong tien giao thong voi cac thuoc tinh sau:hang sx , nam sx,giachuathue,
//trong do co cac ham :khoi tao voi cac tham so co gia tri ngam dinh,ham tao, ham huy,
//ham nhap du lieu cho 1 phuong tien gt,ham xuat du lieu cho 1 ptgt
//xay dung lop xe khach ke thua tu lop ptgt,lop xe khach bo sung them tt: so tuyen ,so ghe 
//va lop nay gom cac ham tp:khoi tao voi cac gia tri ngam dinh,ham huy,tai tinh nghia toan tu nhap,xuat
//ham tinh gia nganh sau thue: biet gia sau thue = gia chua thue + gia chua thue * 8 %
//tai dinh nghia toan tu nho hon de so sanh nam sx cua xe khach voi 1 so nguyen
//nhap vao danh sach n phuong tien gt va hien thi ds da nhap
//nhap vao danh sach gom n xe khach , hien thi ds xe khach co so ghe lon hon 29
 
#include<iostream>
#include<string.h>
using namespace std;
class ptgt{
	public:
		char hangsx[30];
	    int namsx;
	    float giachuathue;
	ptgt(){}
	ptgt(char* hangsx,int namsx,float giachuathue){
		strcmp(this->hangsx,hangsx);
		this->namsx=namsx;
		this->giachuathue=giachuathue;
	}	
	~ptgt(){}
	void nhap(){
		cin.ignore();
		cout<<"Nhap hang sx : ";
		cin.getline(hangsx,30);
		cout<<"Nhap nam sx :";
		cin>>namsx;
		cout<<"Nhap gia chua thue:";
		cin>>giachuathue;
		cout<<endl;
	} 
	void xuat(){
		cout<<"\nHang SX : "<<hangsx;
		cout<<"\nNam SX : "<<namsx;
		cout<<"\nGia Chua Thue"<<giachuathue<<endl;
	}
	float GiaChuaThue(){
		return this->giachuathue;
		
	}
	float NamSX(){
		return this->namsx;
	}
};
class xekhach: public ptgt{
	public:
		int sotuyen;
	    int soghe;
	xekhach(){}
	xekhach(char* hangsx,int namsx,float giachuathue,int sotuyen,int soghe):ptgt(hangsx,namsx,giachuathue){
		this->sotuyen=sotuyen;
		this->soghe=soghe;		
	}
	~xekhach(){}
	friend istream& operator>>(istream& is,xekhach& a){
		a.nhap();
		cout<<"Nhap so tuyen : ";
		cin>>a.sotuyen;
		cout<<"Nhap so ghe : ";
		cin>>a.soghe;
		cout<<endl;
	}
	float gianganhsauthue(){
		return GiaChuaThue() + GiaChuaThue() * 0.08;
	}
	friend ostream& operator<<(ostream&os,xekhach a){
		os<<"\nSo Tuyen : "<<a.sotuyen
		  <<"\nSo Ghe : "<<a.soghe
		  <<"\nGia Chua Thue :"<<a.gianganhsauthue()<<endl;
		  return os;
	}
	bool operator<(int n){
		return (this->NamSX() <n);
	}
	
};
int main(){
	int n;
	cout<<"Nhap so PTGT : ";
	cin>>n;
	ptgt a[n];
	for(int i=0;i<n;i++){
		cout<<"\tNhap thong tin PTGT thu "<< i+1 <<":"<<endl;
		a[i].nhap();
	}
	for(int i=0;i<n;i++){
		cout<<"\n\tThong tin PTGT thu "<< i+1<<" la ";
		a[i].xuat();
	}
	cout<<endl;
	int m;
	cout<<"Nhap so xe khach : ";
	cin>>m;
	xekhach b[m];
	for(int i=0;i<m;i++){
		cout<<"\tNhap xe khach thu "<< i+1 <<endl;
		cin>>b[i];
	}
	for(int i=0;i<m;i++){
		cout<<"\nThong tin xe khach thu "<< i+1 <<" la "<<endl;
		cout<<b[i];
	}
	cout<<"\nDanh sach xe khach co so ghe lon hon 29 "<<endl;
	for(int i=0;i<m;i++){
		if(b[i].soghe>29){
		cout<<"Thong tin xe khach thu "<< i+1 << " la "<<endl;
		cout<<b[i]<<endl;
	
		
	}
}
}
 
