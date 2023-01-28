#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Nhap vao ba so nguyen duong a,b,c\n";
	cout<<"a = ";cin>>a;
	cout<<"b = ";cin>>b;
	cout<<"c = ";cin>>c;
	
    if(a+b>c&&b+c>a&&a+c>b){
    	if(a==b&&b==c){
    		cout<<"Tam giac deu";
    		}else if(a==b||b==c||c==a){
    			cout<<"Tam giac can";
    			}else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==b*b+a*a){
    				cout<<"Tam giac vuong";
    				}else{
					cout<<"Tam giac thuong";   
					} 	
    	}else{
		cout<<"Ba canh ko tao thành tam giac";
		}
	return 0;
	}