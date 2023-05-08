#include<iostream>
#include<string.h>
using namespace std;
class CN{
	public:
	string ht;
	int tuoi;
	string qq;
	float bl;
	CN(){
		this->ht = " ";
		this->tuoi = 0;
		this->qq = " ";
		this->bl = 0;
	}	
	~CN(){}
	void Nhap(){
		cin.ignore();
		cout<<"Nhap Ho Ten : ";
		cin>>ht;
		cout<<"Nhap Tuoi: ";
		cin>>tuoi;
		cout<<"Nhap Que Quan : ";
		cin>>qq;
		cout<<"Nhap Bac Luong : ";
		cin>>bl;
		cout<<endl;
	}
	float tinhLuong(){
		float luong;
		luong = bl*2500;
		luong = luong + luong*20/100;
		return luong;
		
	}void Xuat(){
	cout<<"\nHo Ten: "<<ht
		<<"\nTuoi "<<tuoi
		<<"\nQue Quan: "<<qq
		<<"\nBac Luong: "<<bl<<endl;
	}
};

int main(){
	CN cn;
	cout<<"Nhap Thong Tin CN : "<<endl;
	cn.Nhap();
	cout<<"Thong Tin CN la :"<<endl;
	cn.Xuat();
	cout<<"Tien Luong Cua Cong Nhan La: "<<cn.tinhLuong();
}
