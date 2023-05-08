#include<iostream>
#include<string.h>
using namespace std;
class mydate{
	private:
	int d,m,y;
	public:
	mydate(int dd,int mm,int yy){
		d=dd;
		m=mm;
		y=yy;
	}
	mydate(){
	
	d=0;y=0;y=0;
	}
	~mydate(){}
	void display(){
		cout<<d<<"/"<<m<<"/"<<y;
	}
	int getnam(){
		return y;
	}
};
 class person:public mydate{
 	private:
 	char name [20];
 	char address[20];
 	long int phone;
 	public:
 	person():mydate(){//Ham khoi tao khong tham so dan xuat tu ham class tren
	 	strcpy(name," ");
	 	strcpy(address," ");
	 	phone=0;
	 }
	 person(char*ten,int dd,int mm,int yy,char*dc,long int dt):mydate(dd,mm,yy){
 		strcpy(name,ten);
 		strcpy(address,dc);
 		phone=dt;
 	}
 ~person(){}
 bool operator>(person n){
 	return getnam()>n.getnam();
 }	
 void display(){
 	cout<<"\n Name : "<<name;
 	cout<<"\n Address : "<<address;
 	cout<<"\n Phone : "<<phone;
 	cout<<"\n Birthday: "; mydate::display();
 }
 };
 int main(){
 	{
  char ten[30],dc[40];
  int d,m,y, n;
  long int dt;
  person p[20];
do
{
cout<<" Nhap so nguoi n = ";
 cin>>n;
}
while(n<0);
for(int i=0;i<n;i++)
{
cout<<"\nNhap thong tin nguoi thu "<<i+1<<" : ";
cout<<"\nName: "; 
cin.ignore(1);
gets(ten);
cout<<"Address: "<<dc;
cout<<"Phone: ";
cin>>dt;
cout<<"Birthday: "<<endl;
cout<<" Day : ";
 cin>>d;
 cout<<" Month : ";
 cin>>m;
 cout<<" Year : ";
 cin>>y;
p[i]=person(ten,d,m,y,dc,dt);
}
cout<<"\n Hien thi danh sach nguoi da nhap :"<<endl;
for(int i=0;i<n;i++) 
 p[i].display();
 }
 }
