#include <iostream>
#include <string>
using namespace std;

class Gcoin;
class Scoin{
	private:
	string name ;
	int value ;
	int rate ;
	public :
	Scoin (){};
	Scoin (int val){
		this ->value =val;
		this -> rate=10;
	}
	
};
   class Gcoin{
   	private:
   	 string name;
   	 int value;
   	 int rate;
   	 int vultra;
   	 public:
   	 Gcoin (){}
   	 Gcoin (int val){
  	 this -> value =val;
  	 this -> rate =5;
  	 this -> vultra=10;
 	   	}
	
};
  int TinhTien (const Scoin&s, const Gcoin& g) 
  	{
  	return s.value * s.rate + g.value * g.rate+ g.vultra;
  }
   int main (){
   	Scoin s(5);
   	Gcoin g(10);
   	cout<<"Gia tri ="<<TinhTien(s,g)<<endl;
   	return 0;
   }
