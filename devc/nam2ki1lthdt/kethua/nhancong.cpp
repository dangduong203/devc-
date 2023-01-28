//xay dung lop nhan cong gom cac tham so lien quan:ma nv, hoten nv,tuoi,tien luong va 2 toan tu nhap xuat
//xay dung lop hinh hoc gom 2 tham so chieu dai va chieu rong va cac toan tu nhap xuat
//xay dung lop thanh tien ke thua tu lop nhan cong va lop hinh hoc biet thanh tien = tien luong*dien tich cua hinh

#include<iostream>
using namespace std;
class nhancong{
	public:
		char manv[20];
		char hoten[30];
		int tuoi;
		float tienluong;
		friend void operator>>(nhancong &nv, istream &is)
		{
			cout<<"Nhap ma nv :";
			is.getline(nv.manv,20);
			cout<<"Nhap ten nv:";
			is.getline(nv.hoten,30);
			cout<<"Nhap tuoi:";
			is>>nv.tuoi;
			cout<<"Nhap tien luong:";
			is>>nv.tienluong;
		}
		friend void operator<<(nhancong &nv, ostream &os)
		{
			os<<"\nMa nv : "<<nv.manv
			  <<"\nHo ten: "<<nv.hoten
			  <<"\nTuoi :"<<nv.tuoi
			  <<"\nTien luong:"<<nv.tienluong;
		}
		float tluong(){
			return this->tienluong;
		}
			 
};
class hinhhoc{
	public:
		int chieudai;
		int chieurong;
		int dt;
	    friend void operator>>(hinhhoc &hh, istream &is)
		{
	    	cout<<"Nhap chieu dai :";
	    	is>>hh.chieudai;
	    	cout<<"Nhap chieu rong :";
	    	is>>hh.chieurong;
		}
		friend void operator<<(hinhhoc &hh, ostream &os)
		{
			os<<"Chieu dai : "<<hh.chieudai
			  <<"Chieu rong: "<<hh.chieurong;	
		}
		void dientich(){
		    this->dt= this->chieudai*this->chieurong;
		}
		
};
class thanhtien : public nhancong , public hinhhoc{	
    public:
    	int ttien;
    	nhancong a;
    	hinhhoc b;
		void nhap(){
			a>>cin;
	        b>>cin;
		}
	    void ttienn(){
	    	dientich();
	     	this->ttien=this->tienluong * this->dt;
		}
	    void xuat(){
	    	
	    	ttienn();
	     	cout<<"Thanh tien la :"<<ttien;	
		}
};
int main(){
	thanhtien c;
	c.nhap();
	c.xuat();
	return 0;
}



















