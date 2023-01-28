#include<iostream.h>
#include<math.h>
using namespace std;

int main(){
	int n;
	double s=0;
    cout<<"nhap n:";
	cin >> n;
	
	for(int i = 1;i <= n; i++)
	s = s + (1.0/i);
	
	cout<<"tong la:"<<s<<endl;
	
	return 0;
	
 
}