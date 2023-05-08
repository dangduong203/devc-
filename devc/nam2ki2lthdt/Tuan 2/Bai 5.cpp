#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class Nguoi{
	private:
		char ht[20],nghenghiep[30],quoctich[20];
		int tuoi;
	public:
		Nguoi(char * ht =" ",char * nghenghiep	=" ",char *quoctich	=" ",int tuoi=0){
			strcpy(this->ht,ht);
			strcpy(this->nghenghiep,nghenghiep);
			strcpy(this->quoctich,quoctich);
					this->tuoi=tuoi;
			
		}
		~Nguoi(){}
		void nhap(){
			cin.ignore();
			cout << "\tNhap ho ten:";
			cin.getline(ht,20);
			cout <<"\tNhap nghe nghiep:";
			cin.getline(nghenghiep,30);
			cout << "\tNhap quoc tich:";
			cin.getline(quoctich,20);
			cout << "\tNhap tuoi:";
			cin>>tuoi;
		}
		void xuat(){
			cout << setw(30)<<ht
			     << setw(15)<<nghenghiep
			     << setw(15)<<quoctich
			     << setw(15)<<tuoi<<endl;
		}
		char * getht()
		{
			return ht;
		}
		char * getnn()
		{
			return nghenghiep;
		}
		char * getqt()
		{
			return quoctich;
		}
		int gett()
		{
			return tuoi;
		}
};
	void td()
		{
			cout << setw(30)<<"HO TEN"
			     << setw(15)<<"NGHE NGHIEP"
			     << setw(15)<<"QUOC TICH"
			     << setw(15)<<"TUOI"<<endl;
		}


int main()
{
		int n;
		cout << "\nNhap so nguoi:";
		cin >> n;
		Nguoi *a = new Nguoi[n];	
	for (int i =0 ; i<n ; i++){
		cout <<"\nNguoi thu "<<i+1<<":\n";
		a[i].nhap();
	}
	cout << "\n-----------------------XUAT THONG TIN NGUOI-----------------------------------------:\n";
	td();
	for (int i =0 ; i<n ; i++)
	{
		a[i].xuat();
	}
	cout << "\n---------------------DANH SACH TANG DAN THEO THU TU HO TEN--------------------------:\n";
	for (int i =0 ; i<n ; i++)
	{
		for (int j=i+1 ; j<n ; j++)
		{
			if (strcmpi(a[i].getht(),a[j].getht())>0)
			{
				Nguoi temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		a[i].xuat();
	}
	cout <<"\n-----------------------DANH SACH NGUOI CO NGHE NGHIEP LA BAC SI--------------------------:\n";
    			td();
				for (int i=0 ; i<n ; i++)
				{
					if (strcmp(a[i].getnn(),"bac si")==0)
					{
					 	cout << endl;
						a[i].xuat();					
					}
				}
		cout <<"\n-----------------------DANH SACH NGUOI CO QUOC TICH CAMPUCHIA----------------:\n";
    		
	bool KT = false;
	for (int i=0 ; i<n ; i++){
		if (strcmpi(a[i].getqt(),"Campuchia")==0){
			
			a[i].xuat();
			KT=true;
		}
		if(!KT){
			cout << "\nKhong co thi sinh trong danh sach !!";
		}
	}
	for (int i=0 ; i<n ; i++){
		if (strcmpi(a[i].getqt(),"Campuchia")==0){
			n--;
			for(int k=i ; k<n ; k++){
				a[k]=a[k+1];
			}
			
		}
	cout << "\nDanh sach thi sinh sau khi xoa:\n";
	   td();
	   cout << endl;
	   a[i].xuat();
	}
		cout <<"\n------------------DANH SACH NGUOI CO TEN LE DAI NGHIA--------------------------\n";
    			td();
				for (int i=0 ; i<n ; i++){
					if (strcmpi(a[i].getht(),"Le Dai Nghia")==0){
					cout << endl;
					a[i].xuat();					
					}
				}
		float CVMAX =a[0].gett();
	int chisoCVMAX=0;
	for(int i=1 ; i<n ; i++){
	if(CVMAX < a[i].gett()	){
		
		CVMAX = a[i].gett();
		chisoCVMAX =i;
	}
	}
	cout << "\nNguoi co so tuoi cao nhat la: "<<CVMAX<<endl;
	float CVMIN =a[0].gett();
	int chisoCVMIN=0;
	for(int i=1 ; i<n ; i++){
	if(CVMIN > a[i].gett()	){
		
		CVMIN = a[i].gett();
		chisoCVMIN =i;
	}
	}
	cout << "\nNguoi co so tuoi nho nhat: "<<CVMIN<<endl;
}
			
