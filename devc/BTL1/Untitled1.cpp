#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class SV{
	private:
		int sbd;
		char ht[30];
		float toan,li,hoa;
	public:
	
	SV(int sbd=0 , char * ht =" ",float toan=0 , float li=0 , float hoa=0){
			strcpy (this ->ht,ht);
				this ->sbd=sbd;
				this ->toan=toan;
				this -> li=li;
				this ->hoa=hoa;
			
		}
		~SV(){}
		void nhap()
		{
			cin.ignore();
			cout<<"\tNhap ho ten:";
			cin.getline(ht,30);
			cout << "\tNhap so bao danh:";
			cin >> sbd;
			cout << "\tNhap diem toan: ";
			cin >> toan;
			cout << "\tNhap diem li: ";
			cin >> li;
			cout << "\tNhap diem hoa: ";
			cin >> hoa;
		}
		void xuat()
		{
			cout << setw(30)<<ht
			     << setw(15)<<sbd
			     << setw(15)<<toan
			     << setw(15)<<li
			     << setw(15)<<hoa
				 << setw(15)<<tongdiem()<<endl;
		}
		float tongdiem()
		{
			return toan +li+hoa;
		}
		void trungtuyen()
		{
			if(tongdiem()>=20){
				cout << setw(30)<<ht
			     << setw(15)<<sbd
			     << setw(15)<<toan
			     << setw(15)<<li
			     << setw(15)<<hoa
				 << setw(15)<<tongdiem()<<endl;
			}
		}
		
};
void td(){
			cout << setw(30)<<"HO TEN"
			     << setw(15)<<"SO BAO DANH"
			     << setw(15)<<"TOAN"
			     << setw(15)<<"LI"
			     << setw(15)<<"HOA"
				 <<setw(15)<<"TONG DIEM"<<endl;
		}
int main()
{
	int n;
	cout << "\nNhap so sinh vien:";
	cin >> n;
	SV *a = new SV[n];
	for (int i =0 ; i<n ; i++){
		cout <<"\nSinh vien thu "<<i+1<<":\n";
		a[i].nhap();
	}
	cout << "\nXuat thong tin sinh vien:"<<endl;
	 td();
	for (int i =0 ; i<n ; i++)
	{
		a[i].xuat();
	}
	cout << "\nDanh sach sinh vien trung tuyen la:\n";
	td();
	for (int i=0 ; i<n ; i++)
	{
		a[i].trungtuyen();
	}
	SV max=a[0];
	for(int i=1 ; i<n ; i++)
	{
		if(max.tongdiem() < a[i].tongdiem()	)
		{	
		max = a[i];
		}
		
	}
	cout << "\nSinh vien thu khoa la: "<<endl;
		max.xuat();
		
	
	
}
