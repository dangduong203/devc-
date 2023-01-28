#include<iostream>
using namespace std;
void nhap(int a[],int &n){
	for(int i=0; i< n; i++){
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}
void xuat(int a[],int &n){
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
}
void nguoc(int a[],int &n){
	for(int i=n-1; i>=0; i--){
		cout << a[i] << " ";
	}
}
void sapxep(int a[],int &n){
	for(int i=0; i<n-1; i++){
	for(int j=i+1;j<n;j++){
	if(a[i]>a[j]){
	    swap (a[i],a[j]);
	}
}
}
}
void search(int a[], int n , int k){
	int dem = 0;
	for(int i=0; i< n; i++){
		if(a[i]==k){
			dem++;
			cout<<"\nda tim thay";
		}
	}
	if(dem==0){
		cout<<"\nkhong tim thay ";
	}
}
int main(){
	int a[100];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout<<"nhap cac phan tu :";
	nhap(a,n);
	cout<<"cac phan tu sau khi xuat la :";
	xuat(a,n);
	cout<<"\ncac phan tu sau khi nguoc la:";
	nguoc(a,n);
	cout<<"\ncac phan tu sau khi sap xep la:";
	sapxep(a,n);
	xuat(a,n);
	int k;
	cout<<"\nNhap k: ";
	cin>> k;
	search(a,n,k);

}
