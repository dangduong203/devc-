#include<iostream>
using namespace std;
class nhanvien{
		int manv;
		string tennv;
		int tnct;
		float hsl;
		long lg;
    public:
    	void nhap(){
    		cout<<"Nhap manv:";
    		cin>>this->manv;
    		cout<<"Nhap tennv:";
    		cin>>this->tennv;
    		cout<<"Nhap tnct:";
    		cin>>this->tnct;
		}
		void hesoluong(){
			if(this->tnct<12)this->hsl=1.92;
			if(this->tnct>=12 && this->tnct<36)this->hsl=2.34;
			if(this->tnct>=36 && this->tnct<60)this->hsl=3.0;
			if(this->tnct>=60)this->hsl=4.5;
		}
		void luong(){
			this->lg=this->hsl*1000000;
		}
		void xuat(){
			hesoluong();
			luong();
			cout<<"\nma nv:"<<this->manv;
			cout<<"\nten nv:"<<this->tennv;
			cout<<"\ntham niem cong tac:"<<this->tnct;
			cout<<"\nhe so luong:"<<this->hsl;
			cout<<"\nluong nv:"<<this->lg<<endl;
	        }
};
int main(){
	int n;
	cout<<"Nhap so nv:";
	cin>>n;
	nhanvien a[n];
	for(int i=0;i<n;i++){
		cout<<"\nNhap nv thu "<<i+1<<":\n";
		a[i].nhap();
	}
	cout<<"\nDS nv sau khi xuat la:\n";
	for(int i=0;i<n;i++){
		cout<<"nhan vien thu "<<i+1<<" la:\n";
		a[i].xuat();
	}
	return 0;
}
	


