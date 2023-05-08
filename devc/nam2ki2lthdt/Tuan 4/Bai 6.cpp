#include<iostream>
#include<string.h>
using namespace std;
class Pet{
	protected:
	float tuoi;
	float cannang;
	public:
  Pet(){
  	
  }
  Pet(float tuoi,float cannang){
  	tuoi=tuoi;
  	cannang=cannang;
  }	
  
};
 class Dog:public Pet{
 	private:
 	char Maumat[20];
 	char sothich[20];
 	public:
 	Dog(){
	 	
	 }
 	Dog(float tuoi,float cannang,char*sothich,char*Maumat):Pet(tuoi,cannang){
	 	strcpy(this->Maumat,Maumat);
	 	strcpy(this->sothich,sothich);
	 }
    void Nhap(){
    	cout<<" Nhap tuoi :";
    	cin>>tuoi;
    	cout<<" Nhap can nang : ";
    	cin>>cannang;
    	fflush(stdin);
    	cout<<" Nhap mau mat : ";
    	cin.getline(Maumat,20);
    	cout<<" Nhap so thich : ";
    	cin.getline(sothich,20);
    }
    void Xuat(){
    	cout<<" Tuoi : "<<tuoi;
    	cout<<"\n Can nang : "<<cannang;
    	cout<<"\n Mau mat : "<<Maumat;
    	cout<<"\n So thich : "<<sothich<<endl;
    }
    float gettuoi(){
  	return tuoi;
  }
  float getcannang(){
  	return cannang;
  }
 
 };
 int main(){
 	int n,i;
 	cout<<" Nhap so dog : ";
 	cin>>n;
 	 Dog *d = new Dog[n];
 	for(int i=0;i<n;i++){
	 	cout<<" Dog thu : "<<i+1<<endl;
	 	d[i].Nhap();
	 }
	 cout<<" Danh sach dog da nhap la :"<<endl;
	 for(int i=0;i<n;i++){
	 	cout<<" Dog thu : "<<i+1<<endl;
	 	d[i].Xuat();
	 }
	 cout << "\nDanh sach sap xep theo can nang \n";
	for (int i=0 ; i<n ; i++){
		for(int j= i+1 ; j<n ; j++){
			if ((d[i].getcannang(), d[j].getcannang())>0){
				Dog temp = d[i];
				d[i]=d[j];
				d[j]=temp;
			}
		}
	 d[i].Xuat();
	 
	}
	 cout<<" Cho co tuoi tu 2 den 5 tuoi  "<<endl;
	 if((d[i].gettuoi()>2&&d[i].gettuoi()<5)==0){
	 	for(int i=0;i<n;i++){
 		d[i].Xuat();
	 	}
 	}
 	else{
	 	cout<<" Khong co loai dog phu hop yeu cau !!";
	 }
	 
	float sum=0;
	for (int i=0 ;i<n ; i++){
		sum+=d[i].getcannang();
	     cout<<"\nTong can nang cac dog da nhap: "<<sum<<endl;
		}

 }
