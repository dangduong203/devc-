#include<iostream>
using namespace std;

int main() 
{
	int a[100]; 
	int *ptr = a;
	int n;
	cout << "Nhap n: "; 
	cin >> n;
	cout << "\nNhap mang: " << endl;
	for(int i = 0; i < n; i++)
	{
		cout << "a["<< i << "] = "; 
		cin >> *(ptr+i);
	}
// tang tat ca cac gia tri cua mang len 2
cout << "\nCac gia tri sau khi tang len 2 la: " << endl;
for(int i = 0; i < n; i++){
	cout << "a[" << i << "] = " << *(ptr+i)+2 << endl;
}

return 0;
}