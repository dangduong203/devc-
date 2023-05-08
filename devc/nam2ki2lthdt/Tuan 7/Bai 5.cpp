#include<iostream>
using namespace std;
template<class t>
class VALUES {
private:
	t vlue1, vlue2;
public:
	VALUES(t num1, t num2) {
		this->vlue1 = num1;
		this->vlue2 = num2;
	}
	t add() {
		return vlue1 + vlue2;
	}
	t sub() {
		return vlue1 - vlue2;
	}
	t  mul() {
		return vlue1 * vlue2;

	}
	t div() {
		return (vlue1 /vlue2);
	}
	t getMax() {
		if (vlue1 > vlue2) return vlue1;
		return vlue2;
	}
	void output() {
		cout << "\nSum = " << add()
			<< "\nSub = " << sub()
			<< "\nMul = " << mul()
			<< "\nDiv = " << div()
			<< "\nMax = " << getMax() << endl;
	}
};
int main() {
	VALUES<int> a(10, 20);
	a.output();
}