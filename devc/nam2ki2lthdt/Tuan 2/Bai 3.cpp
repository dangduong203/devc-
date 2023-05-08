#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class TS{
	private:
		char hoten[20];
		float toan,van;
	public:
		
		TS(char *hoten=" ",float toan=0 , float van=0)
		{
			strcpy(this ->hoten,hoten);
					this ->toan = toan;
					this ->van = van;
		}
		~TS(){}
		void nhap()
		{
			cin.ignore();
			cout << "\tNhap ho ten:";
			cin.getline(hoten,20);
			cout << "\tNhap diem toan:";
			cin >> toan;
			cout << "\tNhap diem van:";
			cin >> van;
		}
		void xuat()
		{
			cout << endl << setw(30)<<hoten 
				 << setw(15)<<toan
				 << setw(15)<<van;
		}
		void tieude()
		{
			cout << setw(30)<<"HO TEN" 
				 << setw(15)<<"TOAN"
				 << setw(15)<<"VAN";
		}
		char * getht()
		{
			return hoten;
		}
};
int main()
{
	int n;
	cout << "\nNhap so thi sinh:";
	cin >> n;
	TS * a = new TS[n];
	for (int i =0 ; i<n ; i++)
	{
		cout <<"\Thi sinh thu "<<i+1<<":\n";
		a[i].nhap();
	}
	cout << "\nXuat thong tin sinh vien:\n";
	a->tieude();
	for (int i =0 ; i<n ; i++){
	//	cout <<"\nThi sinh thu "<<i+1<<": \n";
		a[i].xuat();
	}
	TS tstk;
	char httk[20];
	cin.ignore();
	cout << "\nNhap thong tin thi sinh can tim: ";
	cin.getline(httk,20);
	bool KT = false;
	a->tieude();
	for (int i=0 ; i<n ; i++){
		if(strcmpi (httk ,a[i].getht())==0)
		{
			
			a[i].xuat();
			KT=true;
			if(!KT)
			{
				cout << "\nKhong co thi sinh trong danh sach !!";
			}
		}
		
	}
	cout << "\nDanh sach thi sinh sau khi xoa: \n";
	a->tieude();
	for (int i=0 ; i<n ; i++){
		if(strcmpi (httk ,a[i].getht())==0){
			n--;
			for(int k=i ; k<n ; k++){
				a[k]=a[k+1];
			}
			
		}
	   a[i].xuat();
	}
	
	cout << "\nDanh sach sap xep theo ho ten la:\n";
	a->tieude();
	for (int i=0 ; i<n ; i++){
		for(int j= i+1 ; j<n ; j++){
			if (strcmpi(a[i].getht(), a[j].getht())>0){
				TS temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		a[i].xuat();
	}

	cout<<endl;
}
