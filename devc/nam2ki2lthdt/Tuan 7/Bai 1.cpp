#include<iostream>
using namespace std;
template<class T>
T max(T a, T b, T c) {
	T max = a;
	if (b > a) max = b;
	if (c > b) max = c;
	return max;
}
int main() {
	int a, b, c;
	cout << "Nhap a , b, c: ";
	cin >> a >> b >> c;
	cout <<"So Lon Nhat: "<< max(a, b, c);
	return 0;
}
