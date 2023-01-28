#include<iostream.h>

int main(){
	
	int n;
	cout <<"\nNhap so luong phan tu "<< endl;
	cin >> n;
	
	int a[n];
	
	for(int i = 0; i < n; i++){
		cout<<"\nNhap vao phan tu thu:"<< i + 1 << endl;
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cout<<"\nPhan tu thu"<< i + 1<< " la: "<< a[i] << endl;
	}
	return 0;
}