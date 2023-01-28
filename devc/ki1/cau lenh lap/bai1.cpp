#include<iostream>
#include<cmath>
using namespace std;

int main(){
int n , uoc ;

cout<<"Nhap vao so nguyen duong n :";cin>>n;
if(n<0){
	cout<<"Nhap lai so nguyen duong > 0";
	}else{
		for(int i = 1 ; i <= n; i++ ){
			if(n%i==0){
				cout<<i<<" ";
			    uoc++;
				}
			}
	
	}
return 0;
}