#include <iostream>
using namespace std;

int Nhap()
{
	int x;
	do
	{
		cin >> x;
		if (x < 0)
			cout << "Nhap sai yeu cau nhap lai!";
	} while (x < 0);
	return x;
}

int Tinh(int n)
{
	int s = 1;
	for (int i = 0; i <= n; i++)
		s = s + (2 * i - 1);
	return s;
}

int main()
{
	int n; 

	cout << "Nhap so nguyen n: ";
	n = Nhap();
	cout << "Ket qua la: "<< Tinh(n) << endl;

	return 0;
}