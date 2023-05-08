#include<iostream>
using namespace std;
template<class t>
t nhap(t* a, t &n) {
	cout<<"Nhap Mang :";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
template < class t>
t xuat(t* a, t n) {
	for (int i = 0; i < n; i++) {
		cout<<"\na["<<i<<"]= "<<a[i];
	}
}
template<class t > 
t tong(t* a, t n) {
	t sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum;
}

int main() {
	int a[100];
	int n;
	cout << "Nhap n: "; cin >> n;
	nhap(a, n);
	xuat(a, n);
	int sum = tong(a, n);
	cout << "\n-Tong Mang: " << sum << endl;
}
