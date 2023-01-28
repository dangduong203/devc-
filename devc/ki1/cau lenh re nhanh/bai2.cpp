#include <iostream> 
using namespace std; 
int main() 
{ 
    int a, b, c, max,min;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    cout << "Nhap c = ";
    cin >> c;
    
    max = a;
    if(max < b) {
        max = b;
    }
    if(max < c) {
        max=c; 
    }
    cout << "So lon nhat trong 3 so la: " << max << endl;
    
    min = a;
    if(min > b){
    	min = b;
    }
    if(min > c){
    	min = c;
    }
    cout << "So nho nhat trong 3 so la:"<< min <<endl;
    
    return 0;
}