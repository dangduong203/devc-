#include<iostream>
using namespace std;
class CN{

	private:
	char ht[20];
	int tuoi;
	char qq[20];
	float bl;
	public:
	CN(char*ht,int tuoi , char * qq , float bl){
		strcpy(	this->ht ,ht);
			this->tuoi = tuoi;
			strcpy(	this->qq ,qq);
			this->bl = bl;
	}	
	void nhap(){
		cin.ignore();
		cout<<"Nhap Ho Ten : ";
		cin.getline(ht,20);
		cout<<"Nhap Tuoi: ";
		cin>>tuoi;
		cout<<"Nhap Que Quan : ";
		cin.getline(qq,20);
		cout<<"Nhap Bac Luong : ";
		cin>>bl
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
	CN a("Tran Dang Duong",20,"Nam Dinh", 1);
	a.Xuat();
	cout<<"Tien Luong Cua Cong Nhan La: "<<a.tinhLuong();
}