#include<iostream>
using namespace std;
template<class t>
class Array {
private:
	t* a;
	int size;
public:
	Array(t *arr, int n) {
		size = n;
		a = new t[size];
		for (int i = 0; i < size; i++) {
			a[i] = arr[i];
		}
	}
	void print() {
		cout << "\nXuat Mang: ";
		for (int i = 0; i < size; i++) {
			cout<< "\t" << a[i];
		}
	}
	void tong() {
		t s = 0;
		for (int i = 0; i < size; i++) {
			s+= a[i];

		}
		cout <<"\n-Tong Mang: " << s << endl;
	}
};
int main() {
	float arr[5] = { 2,3,5,7,8 };
	Array <float> a(arr, 5);
	a.print();
	a.tong();
}