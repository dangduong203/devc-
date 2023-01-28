#include<iostream.h>
int main (){
	int n,s=0,x=0;
	cout<<"cap cua ma tran vuong la: ";
	cin>>n;
	while(n<1){
		cout<<"hay nhap lai so cap cua ma tran: ";
		cin>>n;
		cout<<"\n"; 
	} 
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"nhap gia tri cho ma tran:a["<<i<<"]["<<j<<"]="; 
			cin>>a[i][j]; 
		} 
	} 
	for(int i=0;i<n;i++){
		s+=a[i][i]; 
	} 
	cout<<"tong cac phan tu tren duong cheo chinh la: "<<s<<endl;
	int j=0; 
	for(int i=n-1;i>=0;i--){
			x+=a[i][j];
			j++; 
		}
	cout<<"tong cac phan tu tren duong cheo phu la: "<<x<<endl; 
} 