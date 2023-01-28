#include<iostream.h>
#include<iomanip.h>
#include<string.h>

struct hocsinh
{	
      char mahs[10];
      char tenhs[25];
      float dtoan, dly, dhoa;
      float dtb;
      char xl[12];
};

void nhap(hocsinh a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\t\tHoc sinh thu "<<i+1<<endl;
		cin.ignore();
		cout<<"Nhap ma hoc sinh:";
		cin.getline(a[i].mahs,10);
		cout<<"Nhap ten hoc sinh:";
		cin.getline(a[i].tenhs,25);
		cout<<"Diem toan:";
		cin>>a[i].dtoan;
		cout<<"Diem ly:";
		cin>>a[i].dly;
		cout<<"Diem hoa";
		cin>>a[i].dhoa;
	}
}

void tieude()
{
	cout<<setw(10)<<"Ma hs";
    cout<<setw(25)<<"Ten hoc sinh";
    cout<<setw(8)<<"Toan";
    cout<<setw(8)<<"Ly";
    cout<<setw(8)<<"Hoa";
    cout<<setw(8)<<"Dtb";
    cout<<setw(12)<<"Xep loai";
    cout<<endl;
}

void xuat(hocsinh a[],int n)
{
	cout<<"\t\t\t---DANH SACH HOC SINH"<<endl;
    tieude();
    for(int i=0; i<n; i++)
    {
       cout<<setw(10)<<a[i].mahs;
       cout<<setw(25)<<a[i].tenhs;
       cout<<setw(8)<<a[i].dtoan;
       cout<<setw(8)<<a[i].dly;
       cout<<setw(8)<<a[i].dhoa;
       cout<<setw(8)<<a[i].dtb;
       cout<<setw(12)<<a[i].xl;
       cout<<endl;
}
}
 
void tinhdtb(hocsinh a[], int n){
	for(int i=0;i<n;i++)
	a[i].dtb = (a[i].dtoan+a[i].dly+a[i].dhoa)/3;
} 

void xeploai(hocsinh a[], int n)
{ 
     for(int i=0; i<n; i++){
     	if(a[i].dtb>=9)
	     	strcpy(a[i].xl,"Xuat sac");
     	else
	     	if(a[i].dtb>=8)
	     		strcpy(a[i].xl,"Gioi");
	     	else
			   	if(a[i].dtb>=6.5)
			   	    strcpy(a[i].xl,"Kha");
			   	else
				   if(a[i].dtb>=5)
				      strcpy(a[i].xl,"Trung binh");
					else
					  strcpy(a[i].xl,"Yeu");      
	     	
	     }
}

void gioisx(hocsinh a[],int n)
{
	cout<<"\t\t\t---DANH SACH HOC SINH GIOI SX---"<<endl;
	tieude();
	for(int i=0;i<n;i++){
		if((strcmp(a[i].xl,"Gioi")==0)||(strcmp(a[i].xl,"Xuat sac")==0)){
			cout<<setw(10)<<a[i].mahs;
            cout<<setw(25)<<a[i].tenhs;
            cout<<setw(8)<<a[i].dtoan;
            cout<<setw(8)<<a[i].dly; 
            cout<<setw(8)<<a[i].dhoa;
            cout<<setw(8)<<a[i].dtb;
            cout<<setw(12)<<a[i].xl;
            cout<<endl;
		}
	}
}
int main(){
	int n;
	hocsinh a[100];
	cout<<"Nhap so hoc sinh:";
	cin>>n;
	nhap(a,n);
	tinhdtb(a,n);
	xeploai(a,n);
	xuat(a,n);
	gioisx(a,n);
}






