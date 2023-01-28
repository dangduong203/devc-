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
	cout<<"\n 3 :  Tim Max";
	cout<<"\n 4 :  Tim Min\n";
	cout<<"Nhap lua chon cua ban:";
	cin>>luachon;
	switch(luachon){
		case 1:
		int tong = a+b+c;
		cout<<"Tong cua 3 so la:"<<tong<<endl;
		break;
		case 2:
		int tich = a*b*b;
		cout<<"Tich cua 3 so la:"<<tich<<endl;
		break;
		case 3:
 		int Max = a;
        if(b > Max){
       	   Max = b;
        }
        if(c > Max){
    	   Max = c;
         }
        cout<<"So lon nhat trong 3 so la "<<Max<<endl;
        break;
        case 4:
        int Min=a;
        if(b < Min){
        	Min = b;
        }
        if(c < Min){
        	Min = c;
        }
        cout<<"So nho nhat trong 3 so la "<<Min<<endl; 
        break;
 }
}