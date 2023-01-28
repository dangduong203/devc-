#include<iostream>
#include<string.h>
using namespace std;
class namgioi{
	public:
		char hoten[30];
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
		cout<<"Nhap Ho Ten : ";
		cin.getline(hoten,30);
		cout<<"Nhap Tuoi : ";
		cin>>tuoi;
		cout<<"Nhap CMND : ";
		cin>>cmnd;
		cout<<endl;
	}
	void xuat(){
		cout<<"\nHo Ten : "<<hoten
		    <<"\nTuoi : "<<tuoi
		    <<"\nCMND : "<<cmnd<<endl; 
	}
};
class khachhang : public namgioi{
	public:
		int maso;
	    int solanmua;
	khachhang(){}
	khachhang(int maso,int solanmua,char* hoten,int tuoi,int cmnd ) : namgioi(hoten,tuoi,cmnd){
		this->maso=maso;
		this->solanmua=solanmua;
	}
	~khachhang(){}
	friend istream& operator>>(istream& is , khachhang &kh){
		kh.nhap();
		cin.ignore();
		cout<<"Nhap Ma So Khach Hang : ";
		is>>kh.maso;
		cout<<"Nhap So Lan Mua Hang : ";
		is>>kh.solanmua; 
		return is;
	}
	string phanloai(){
		if(tuoi>60){
			return"Cao tuoi";
		}
		else if(tuoi>35 && tuoi<60){
			return"Trung nien";
		}
		else{
			return"Tre";
		}
	}
	friend ostream& operator<<(ostream& os , khachhang kh){
		kh.xuat();
		os<<"\nMa So KH : "<<kh.maso
		  <<"\nSo Lan Mua Hang : "<<kh.solanmua
		  <<"\nPhan Loai Khach Hang : "<<kh.phanloai()<<endl; 
		  cout<<endl; 		
	}    
	
};
int main(){
	int n;
	cout<<"\nNhap so luong nam gioi : ";
	cin>>n;
	namgioi a[n];
	
	for(int i=0;i<n;i++){
		cout<<"\nNam gioi thu "<<i+1<<endl;
		a[i].nhap();
	}
	cout<<"---Thong tin nam gioi---"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\nThong tin nam gioi thu  "<<i+1<<" : "<<endl;
		a[i].xuat();
	}
	int m;
	cout<<"\nNhap so luong khach hang : ";
	cin>>m;
	khachhang b[m];
	for(int i=0;i<m;i++){
		cout<<"\nKhach hang thu "<<i+1<<endl;
		cin>>b[i];
    }
	cout<<"\n---Danh Sach Khach Hang Theo So Lan Mua Hang---\n";
	for(int i=0;i<m-1;i++)
	{
		for(int j=i+1;j<m;j++)
		{
			if(b[i].solanmua > b[j].solanmua)
			{
				swap(b[i],b[j]);
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		cout<<"Thong tin khach hang thu "<<i+1;
    	cout<<b[i];
	}
}

