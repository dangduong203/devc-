#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int i=2,j,so,kiemTra;
	cout<<"Nhap so :";
	cin>>so;
	cout<<"Tat ca cac so nguyen to tu 1 den "<<so <<" la :";
	while(i<=so){
		kiemTra = 1;
		if(i != 0 && i!= 1){
			j = 2;
			while(j<=i/2){
				if(i%j == 0){
					kiemTra = 0;
					break;
				}
				j++;
			}
			}else{
				kiemTra = 0;
			}
			if(kiemTra == 1){
				cout<<i<<" ";
			}
			i++;
		
		}
		return 0;
	}