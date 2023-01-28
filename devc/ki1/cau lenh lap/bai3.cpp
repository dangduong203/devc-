#include<iostream>
using namespace std;

int kiemTraHoanHao(int x){
	int tongUoc = 0,i;
	for(i=1 ; i<x; i++ ){
		if(x%i==0){
		tongUoc += i;
		}
	}if(tongUoc == x){
		return 1;
	}else{
		return 0;
	}	
}

int main(){
	int n;
	cout<<"Nhap n = ";cin>>n;
	cout<<"Cac so hoan hao trong pham vi n la :\n";
	for(int i=1;i<=n; i++){
		if(kiemTraHoanHao(i)==1){
			cout<<i<<" ";
		}
	}
	
}