#include<iostream>
using namespace std;
int main(){
	int a,b,c,luachon;
	cout<<"Nhap a:";
	cin>>a;
	cout<<"Nhap b:";
	cin>>b;
	cout<<"Nhap c:";
	cin>>c;
	cout<<" 1 :  Tinh tong a+b+c ";
	cout<<"\n 2 :  Tinh tich a*b*c ";
	cout<<"\n 3 :  Tinh phuong trinh ax+b=0\n";
	cout<<"Nhap lua chon cua ban:";
	cin>>luachon;
	switch(luachon){
		case 1:
		int tong = a+b+c;
		cout<<"Tong cua 3 so la:"<<tong<<endl;
		break;
		case 2:
		int tich = a*b*c;
		cout<<"Tich cua 3 so la:"<<tich<<endl;
		break;
		case 3:
  		if(a==0){
    		if(b==0)
    	    	cout<<" Ptrinh vo so nghiem";
    		else
    		    cout<<" Ptrinh vo nghiem ";		
    	} 
    	else{
	    float x =(float) -b/a;
		cout<<"Ptrinh co nghiem x ="<<x<<endl;
    	}
	}
}