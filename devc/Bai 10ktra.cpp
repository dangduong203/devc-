#include<iostream>
using namespace std;
class DichVu{
	protected:
	char Ten[20];
	char Ma[20];
	char diachi[20];
	float dongia;
	public:
	virtual void Nhap(){
		fflush(stdin);
		cout<<" Nhap Ten khach hang :";
		cin.getline(Ten,20);
		cout<<" Nhap Ma khach hang : ";
		cin.getline(Ma,20);
		cout<<" Nhap Dia Chi : ";
		cin.getline(diachi,20);
		fflush(stdin);
		cout<<" Nhap don gia : ";
		cin>>dongia;
	}
	virtual void Xuat(){
		cout<<" Ten khach hang : "<<Ten<<endl;
		cout<<" Ma khach hang : "<<Ma<<endl;
		cout<<" Dia Chi : "<<diachi<<endl;
		cout<<" Don gia : "<<dongia<<endl;
	}
	virtual int ktra()=0;
	virtual float tienphaitra()=0;
};
class AnUong:public DichVu{
	protected:
	float sokhach;
	float tiendichvu;
	public:
	void Nhap(){
		fflush(stdin);
		cout<<" Nhap so khach : ";
		cin>>sokhach;
		cout<<" Nhap tien dich vu ";
		cin>>tiendichvu;
		DichVu::Nhap();
	}
	void Xuat(){
		cout<<" So khach : "<<sokhach<<endl;
		DichVu::Xuat();
		cout<<" Loai dich vu : An Uong "<<endl;
		cout<<" Tien dich vu "<<tiendichvu<<endl;
		cout<<" Tien an uong "<<endl;
	}
   float tienanuong(){
   	if(sokhach>50){
	   	return (sokhach*dongia+tiendichvu)*5/100;
	   }
	   else{
   		return sokhach*dongia+tiendichvu;
   	}
   }	
   int ktra(){
   	return 1;
   }
    float tienphaitra(){
   	return tienanuong();
   }
};
class PhongNghi:public DichVu{
	protected:
	float songaythue;
	public:
	void Nhap(){
		fflush(stdin);
		cout<<" Nhap so ngay thue ";
		cin>>songaythue;
		DichVu::Nhap();
	}
	void Xuat(){
		cout<<" So ngay thue "<<songaythue<<endl;
		DichVu::Xuat();
		cout<<" Tien thue phong nghi "<<tienthuephong()<<endl;
	}
	float tienthuephong(){
		if(songaythue>3){
			return songaythue*dongia*20/100;
		}
		else{
			return songaythue*dongia;
		}
	}
	int ktra(){
		return 2;
	}
	float tienphaitra(){
		return tienthuephong();
	}
};
 void TongTien(DichVu*d[],int n){
 	float tong1;
 	float tong2;
 	for(int i=0;i<n;i++){
	 	if(d[i]->ktra()==1) tong1+=d[i]->tienphaitra();
	 	if(d[i]->ktra()==2) tong2+=d[i]->tienphaitra();
	 }
	 cout<<" Tong tien an uong "<<tong1<<endl;
	 cout<<" Tong tien phong nghi "<<tong2<<endl;
 }
 void Tong(DichVu*d[],int n){
 	float tong;
 	for(int i=0;i<n;i++){
	 	tong+=d[i]->tienphaitra();
	 }
	 cout<<" Tong tien phai tra la : "<<tong<<endl;
 }
int main(){
	DichVu*d[200];
	int n=0;
	int luachon;
	do{
		cout<<" CHUONG TRINH QUAN LI DICH VU "<<endl;
		cout<<" 1.Nhap Thong Tin An Uong "<<endl;
		cout<<" 2.Nhap Thong Tin Phong Nghi "<<endl;
		cout<<" 3.Xuat Thong Tin Da Nhap"<<endl;
		cout<<" 4.Tinh Tien Tung Loai"<<endl;
		cout<<" 5.Tinh tien tong "<<endl;
		cout<<" 6.Nhap lua chon cua ban : ";
		cin>>luachon;
		switch(luachon){
			case 1:
			d[n]=new AnUong();
			d[n]->Nhap();
			n++;
			break;
			case 2:
			d[n]=new PhongNghi();
			d[n]->Nhap();
			n++;
			break;
			case 3:
			for(int i=0;i<n;i++){
				d[i]->Xuat();
			}
			break;
			case 4:
			TongTien(d,n);
			break;
			case 5:
			Tong(d,n);
			default:
			cout<<" Moi ban nhap lai "<<endl;
			break;
		}
		    
	}while(luachon!=0);
}