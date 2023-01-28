#include <iostream>
#include <fstream>
using namespace std;

void Swap(int &x, int &y) {
	int tg = x; x = y; y = tg;
}

void InterchangeSort(int a[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[j] < a[i])
				Swap(a[i], a[j]);
}

int main() {
	int n, h = 0, a[100];

	ifstream f_in("in2.txt");
	ofstream f_out("out2.txt");

	if(!f_in)
		cout <<"Khong thay tep" <<endl;
	if(!f_out)
		cout <<"Khong thay tep" <<endl;

	f_in >>n;
	for (int i = 0; i < n; i++)
		f_in >>a[i];

	f_out <<"So nguyen to: ";
	for (int i = 0; i < n; i++)
		for (int t = 2; t <= a[i]; t++)
			if (a[i] % t == 0) {
				if (a[i] == t) {
					f_out <<a[i] <<" ";
				}
				else
					break;
			}

	f_out <<"\nSo hoan hao: ";
	for (int i = 0; i < n; i++) {
		for (int t = 1; t < a[i]; t++)
			if (a[i] % t == 0)
				h += t;
		if (a[i] == h)
			f_out <<a[i] <<" ";
		h = 0;
	}

	InterchangeSort(a,n);
	f_out <<"\n\nSap xep mang tang dan: ";
	for (int i = 0; i < n; i++) {
		f_out <<a[i] <<" ";
	}

	f_in.close();
	f_out.close();

	system("pause");
	return 0;
}