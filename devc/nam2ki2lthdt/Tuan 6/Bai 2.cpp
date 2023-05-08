#include<iostream>
using namespace std;
class Nguoi{
	protected:
	char hoten[20];
	public:
	virtual void Nhap(){
		fflush(stdin);
		cout<<" Nhap ho ten : ";
		cin.getline(hoten,20);
	}
	virtual void Xuat(){
		cout<<" Ho ten : "<<hoten<<endl;
	}
	virtual float thuong()=0;
};
class Sinhvien:public Nguoi{
	float diem;
	public:
	void Nhap(){
		fflush(stdin);
		Nguoi::Nhap();
		fflush(stdin);
		cout<<" Nhap diem : ";
		cin>>diem;
	}
	void Xuat(){
		Nguoi::Xuat();
		cout<<" Diem :"<<diem<<endl;
	}
	float thuong(){
		if(diem>8){
			return 1;
			return 0;
		}
	}
};
class Giangvien:public Nguoi{
	float bao;
	public:
	void Nhap(){
		fflush(stdin);
		Nguoi::Nhap();
		fflush(stdin);
		cout<<" Nhap so bai bao : ";
		cin>>bao;
	}
	void Xuat(){
		Nguoi::Xuat();
		cout<<" So bai bao : "<<bao<<endl;
	}
	float thuong(){
		if(bao>5){
			return 1;
			return 0;
		}
	}
};
 int main(){
 	Nguoi*ds[200];
 	int i;
 	int k=0;
 	int luachon;
    while(1){
    	cout<<" Chuong trinh quan li Giang Vien va Sinh Vien "<<endl;
    	cout<<"1.Giang Vien "<<endl;
    	cout<<"2.Sinh Vien "<<endl;
    	cout<<"3.Thoat chuong trinh :"<<endl;
    	cout<<" Moi ban nhap doi tuong : ";
    	cin>>luachon;
   	    if(luachon==1)
   	    ds[k]=new Giangvien();
   	    if(luachon==2)
   	    ds[k]=new Sinhvien();
   	    if(luachon==3)
   	    break;
   	    ds[k]->Nhap();k++;
    }
 	cout<<" Danh sach nhung nguoi duoc thuong : "<<endl;
 	for(int i=0;i<k;i++)
 	if(ds[i]->thuong())
 	ds[i]->Xuat();
 }