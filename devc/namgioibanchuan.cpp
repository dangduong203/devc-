#include<iostream>
#include<string.h>
using namespace std;
class namgioi{
	public:
		char hoten[20];
		int tuoi;
		int cmnd;
	namgioi(){}
	namgioi(char* hoten,int tuoi,int cmnd){
		strcpy(this->hoten,hoten);
		this->tuoi=tuoi;
		this->cmnd=cmnd;
	}
	~namgioi(){}
	void nhap(){
		cin.ignore();
		cout<<"||Nhap Ho Ten : ";
		cin.getline(hoten,20);
		cout<<"||Nhap Tuoi : ";
		cin>>tuoi;
		cout<<"||Nhap CMND : ";
		cin>>cmnd;
		cout<<endl;
	}
	void xuat(){
		cout<<"||Ho Ten : "<<hoten
		    <<"\n||Tuoi : "<<tuoi
		    <<"\n||CMND : "<<cmnd<<endl;
	}
};
class khachhang : public namgioi{
	public:
		int maso;
		int slmh;
	khachhang(){}
	khachhang(int maso,int slmh,char* hoten,int tuoi,int cmnd) : namgioi(hoten,tuoi,cmnd){
		this->maso=maso;
		this->slmh=slmh;
	}
	~khachhang(){}
	friend istream& operator>>(istream&is , khachhang &kh){
		kh.nhap();
		cin.ignore();
		cout<<"||Nhap Ma So KH : ";
		is>>kh.maso;
		cout<<"||Nhap So Lan Mua Hang : ";
		is>>kh.slmh;
		return is;	
	}	
	string phanloai(){
		if(tuoi>=60){
			return"Cao Tuoi";
		}
		else if(tuoi>=35 && tuoi<60){
			return"Trung Nien";
		}
		else{
			return"Tre";
		}
	} 
	bool operator >(khachhang &a){
		if(slmh>a.slmh){
			return true;
			return false;
		}
	}
	friend ostream& operator<<(ostream&os ,khachhang kh){
		kh.xuat();
		os<<"\n||Ma So KH : "<<kh.maso
		  <<"\n||So Lan Mua Hang : "<<kh.slmh
		  <<"\n||Phan Loai KH : "<<kh.phanloai()<<endl;
	}
};
int main(){
	int n;
	cout<<"---Nhap So Nam Gioi : ";
	cin>>n;
	namgioi a[n];
	for(int i=0;i<n;i++){
		cout<<"\tNhap Nam Gioi Thu "<<i+1<<"\n";
		a[i].nhap();
	}
	cout<<"\t\t=====THONG TIN NAM GIOI SAU KHI NHAP====="<<endl;
	for(int i=0;i<n;i++){
		cout<<"\tThong Tin Nam Gioi Thu "<<i+1<<endl;
		a[i].xuat();
	}
	int m;
	cout<<"\n---Nhap So Khach Hang : ";
	cin>>m;
	khachhang b[m];
	for(int i=0;i<m;i++){
		cout<<"\tNhap Khach Hang Thu "<<i+1<<endl;
		cin>>b[i];
	}
	cout<<"\t\t=====THONG TIN KHACH HANG SAU KHI NHAP====="<<endl;
	for(int i=0;i<m;i++){
		cout<<"\tThong Tin Khach Hang Thu "<<i+1<<endl;
		cout<<b[i];
	}
	cout<<"\t\t=====THONG TIN KHACH HANG SAU SAP XEP====="<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<m-1;j++){
			if(b[i].slmh<b[j].slmh){
				swap(b[i],b[j]);
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<"\tThong Tin Khach Hang Thu "<<i+1<<endl;
		cout<<b[i];
	}
	cout<<"\t\t=====THONG TIN KHACH HANG SAU CO SLMH<20====="<<endl;
	for(int i=0;i<m;i++){
		if(b[i].slmh<20){
			cout<<"\tThong Tin Khach Hang Thu "<<i+1<<endl;
		    cout<<b[i];
		}
	}
}
