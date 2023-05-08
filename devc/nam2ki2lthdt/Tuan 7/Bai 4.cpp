#include<iostream>
using namespace std;
template<class t> 
class MYPAIR {
private:
	t a, b;
public: 
	MYPAIR(t x, t y) {
		this->a = x;
		this->b = y;

	}
	void output() {
		cout << "\nvalue 1: " << a
			<< "\nvalue 2: " << b;
	}
	t getMax() {
		if (a > b)return a;
		return b;
	}
};
int main() {
	MYPAIR<int> value(10, 20);
	value.output();
	cout << "\n-Max: " << value.getMax() << endl;
	return 0;
}
