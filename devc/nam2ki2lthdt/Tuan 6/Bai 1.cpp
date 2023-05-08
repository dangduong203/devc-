#include <iostream>
#include <string.h>
#include<iomanip>
using namespace std;
class Docgia{
	protected:
		char ma[20],ho[30],ten[30];
		int sthl;
	public:
		virtual void Nhap();
		virtual void Xuat();
		virtual int TienThe()=0;
		virtual int TimKiem()=0;
};
void Docgia::Nhap(){

	cout<<"\nNhap ma: ";
	cin.getline(ma,20);
	cout<<"\nNhap ho: ";
	cin.getline(ho,30);
	cout<<"\nNhap ten: ";
	cin.getline(ten,30);
	cout<<"\nNhap so thang hieu luc: ";
	cin>>sthl;
}
void Docgia::Xuat(){
	cout<<"\nMa: "<<ma;
	cout<<"\nHo: "<<ho;
	cout<<"\nTen: "<<ten;
	cout<<"\nSo thang hieu luc: "<<sthl;
}
class DGTre : public Docgia{
	protected: 
	    int ns;
	public:
	    void Nhap();
	    void Xuat();
	    int TienThe();
	    int TimKiem();
};
void DGTre::Nhap(){
	cin.ignore();
	Docgia::Nhap();
	cin.ignore();
	cout<<"\nNhap ns: ";cin>>ns;
}
void DGTre::Xuat(){
	Docgia::Xuat();
	cout<<"\nNam sinh: "<<ns;
}
int DGTre::TienThe(){
	return sthl*200000;
}
int DGTre::TimKiem(){
	if(sthl<10){
		return 1;
		return 0;
	}
}
class DGLon : public Docgia{
	protected:
	char nghe[20];
	public:
		virtual void Nhap();
		virtual void Xuat();
	    int TienThe ();
		int TimKiem();
};
void DGLon::Nhap(){
	cin.ignore();
	Docgia::Nhap();
	cin.ignore();
	cout<<"\nNhap nghe nghiep: ";
	cin.getline(nghe,20);
}
void DGLon::Xuat(){
	Docgia::Xuat();
	cout<<"\nNghe nghiep:  "<<nghe;
}
int DGLon::TienThe(){
	return sthl*300000;
}
int DGLon::TimKiem(){
	if(strcmp(nghe,"Giang Vien")==0)
	return 1;
	else return 0;
}
class Quanly{
	public:
	Docgia *d[50];
	int n;
	void nhap(){
		int chon;
		int i=0;
		int s=0;
		while(1){
			cout<<"\n1.Doc gia tre em.\n2.Doc gia nguoi lon. \n3.Dung"<<endl;
			cout<<"Nhap Lua Chon Cua Ban :";
			cin>>chon;
			if(chon==3) break;
			else if(chon==1) d[i]=new DGTre();
			else d[i]=new DGLon();
			d[i]->Nhap();
			cout<<endl;
			s=s+d[i]->TienThe();
			i++;
			n=i;
		}
		cout<<"\nTong tien lam the = "<<s<<endl;
	}
	void Tim(){
		cout<<"\nDanh sach doc gia can tim"<<endl;
		for(int i=0;i<n;i++){
			if(d[i]->TimKiem()==true){
				d[i]->Xuat();
				cout<<endl;
			}
		}
	}
};
int main(){
	Quanly a;
	a.nhap();
	a.Tim();
	cout<<endl;
	return 0;
}
