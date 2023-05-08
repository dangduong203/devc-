#include<iostream>
#include<cstring>
using namespace std;
	struct NGAY
	{
	int ngay;
	int thang;
	int nam;
};
   class KH{
	private:
	char ht[30];
	NGAY ns;
	char cmt[10];
	char hk[50];
	public:
	 KH(){
 strcpy(ht," ");
 ns.ngay=0;
 ns.thang=0;
 ns.nam=0;
 strcpy(cmt," ");
 strcpy(hk," ");
}
	KH(char*ht=0,int ng=1,int th=1 ,int n=1 ,char*cmt=0,char*hk=0){
		strcpy(this->ht,ht);
        ns.ngay=ng;
        ns.thang=th;
        ns.nam=n;
		strcpy(this->cmt,cmt);
		strcpy(this->hk,hk);
}

~KH(){}
  void Xuat(){
  	cout<< "Ho ten :"<<ht;
  	cout<< " \nNgay sinh :"<<ns.ngay;
  	cout<< " \nThang sinh :"<<ns.thang;
  	cout<< " \nNam sinh :"<<ns.nam;
  	cout<< " \nChung minh thu so :"<<cmt;
  	cout<< " \nSo ho khau : "<<hk;
  }
};


int main()
{
KH kh1("Tran Dang Duong",27,02,2003,"09116758","Yen Bai - Viet Nam");
kh1.Xuat();
cout<<endl;
return 0;
}
