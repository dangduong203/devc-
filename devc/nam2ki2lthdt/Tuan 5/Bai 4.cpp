#include<iostream>
#include<string>
using namespace std;
class STUDENT{
	protected:
	char ma[20];
	char ht[20];
	char gt[20];
   	public:
   	STUDENT(){
	   	strcpy(ma," ");
	   	strcpy(ht," ");
	   	strcpy(gt," ");
	   }
	 STUDENT(char*ma,char*ht,char*gt){
 		strcpy(this->ma,ma);
 		strcpy(this->ht,ht);
 		strcpy(this->gt,gt);
 	}
~STUDENT(){}
 void Nhap(){
 	fflush(stdin);
 	cout<<" Nhap ma sinh vien : ";
 	cin.getline(ma,20);
 	cout<<" Nhap ho ten : ";
 	cin.getline(ht,20);
 	cout<<" Nhap gioi tinh : ";
 	cin.getline(gt,20);
 }  
 void Xuat(){
 	cout<<" Ma sinh vien : "<<ma<<endl;
 	cout<<" Ho ten : "<<ht<<endl;
 	cout<<" Gioi tinh : "<<gt<<endl;
 }
  friend istream&operator>>(istream&is,STUDENT&st){
  	st.Nhap();
  	return is;
  }
  friend ostream&operator<<(ostream&os,STUDENT st){
  	st.Xuat();
  	return os;
  }
};
class MONHOC{
	protected:
	char Ma[20];
	char Ten[20];
	public:
	MONHOC(){
		strcpy(Ma," ");
		strcpy(Ten," ");
	}
	MONHOC(char*Ma,char*Ten){
		strcpy(this->Ma,Ma);
		strcpy(this->Ten,Ten);
	}
~MONHOC(){
	
}	
	   void nhap(){
	   	fflush(stdin);
		cout<<" Nhap ma mon hoc : ";
		cin.getline(Ma,20);
		cout<<" Nhap ten mon hoc : ";
		cin.getline(Ten,20);
	}
    void xuat(){
 	    cout<<" Ma mon hoc : "<<Ma<<endl;
 	    cout<<" Ten mon hoc : "<<Ten<<endl;
    }
    friend istream&operator>>(istream&is,MONHOC&mh){
    	mh.nhap();
    	return is;
    }
    friend ostream&operator<<(ostream&os,MONHOC mh){
    	mh.xuat();
    	return os;
    }
};
 class DIEMMH:public STUDENT,public MONHOC{
 	float diem;
 	public:
 	DIEMMH(){
	 	diem=0;
	 }
    DIEMMH(char*ma,char*ht,char*gt,char*Ten,char*Ma):STUDENT(ma,ht,gt),MONHOC(Ma,Ten){
    	this->diem=diem;
    }
	void Nhap(){
		STUDENT::Nhap();
		cout<<" Nhap diem thi : ";
		cin>>diem;
		MONHOC::nhap();
	}	 
	void Xuat(){
		STUDENT::Xuat();
		cout<<" Diem thi : "<<diem<<endl;
		MONHOC::xuat();
	}
	friend istream&operator>>(istream&is,DIEMMH&dm){
		dm.Nhap();
		return is;
	}
	friend ostream&operator<<(ostream&os,DIEMMH dm){
		dm.Xuat();
		return os;
	}
	char*getgt(){
		return gt;
	}
	float getdiem(){
		return diem;
	}
	int Timten(char x[]){
		if(strcmp(ht,x)==0)
		return 1;
		return 0;
	}
	char*getten(){
		return Ten;
	}
};
 int main(){
 	int n,i;
 	cout<<" Nhap so doi tuong diem mon hoc : ";
 	cin>>n;
 	DIEMMH a[20];
 	for(int i=0;i<n;i++){
	 	cout<<"\nDiem mon hoc thu : "<<i+1<<endl;
	 	cin>>a[i];
	 }
	 cout<<"_________DANH SACH DOI TUONG DA NHAP__________"<<endl;
	 for(int i=0;i<n;i++){
	 	cout<<" Diem mon hoc thu : "<<i+1<<endl;
	 	cout<<a[i];
 	}
	 cout<<"_______________ Danh sach sinh vien nam______________"<<endl;
	 for(int i=0;i<n;i++){
 		if(strcmpi(a[i].getgt(),"nam")==0){
		 	cout<<a[i];
		 }	 
	 }
	 float sum=0;
	 int sl=0;
	 for(int i=0;i<n;i++){
 		sum+=a[i].getdiem();
 		sl++;	
 	}
 	float tb = sum / sl;
cout << "Trung binh diem cua cac mon hoc la: " << tb << endl;
	 
	 char Ten[20];
	 cout<<" Nhap thong tin sinh vien can tim : ";
	 cin>>Ten;
	 for(i=0;i<n;i++){
 		if(a[i].Timten(Ten)){
         cout<<a[i];
          break;
     }
	 }
      if(i==n){
      cout<<" Khong tim thay thong tin trong danh sach !!"<<Ten<<endl;
      }
DIEMMH diemToanMin;
bool KT = false;

for(int i = 0; i < n; i++) {
    if(a[i].getten() == "Toan") {
        if(!KT) {
            diemToanMin = a[i];
            KT = true;
        } else if(a[i].getdiem() < diemToanMin.getdiem()) {
            diemToanMin = a[i];
        }
    }
}

if(KT) {
    cout << "Thong tin diem mon hoc Toan co diem thi nho nhat: " << endl;
    cout << diemToanMin << endl;
} else {
    cout << "Khong tim thay diem mon hoc Toan trong danh sach." << endl;
}	 

 for(int i=0;i<n-1;i++){
   	for(int j=i+1;j<n;j++){
	   	if(a[i].getdiem	()<a[j].getdiem()){
	   		DIEMMH tg=a[i];
	   		a[i]=a[j];
	   		a[j]=tg;
	   	}
	   }
      	}
  cout << "Danh sach diem mon hoc sau khi sap xep:" << endl;
for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
}	 
	 
	 
	 
	 
 }
 