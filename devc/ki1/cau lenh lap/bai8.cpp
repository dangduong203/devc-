#include "iostream"
using namespace std;
int main()
{
    int a, b;
    int tich = 1;
    cout<<"nhap so a: ";
    cin>>a;
    cout<<"nhap so b: ";
    cin>>b;
    tich = a*b;
    while (a != b){
        if (a > b) 
            a = a-b;
        else 
            b = b-a;
    }
    cout<< "UCLN = "<< a <<endl;
    cout<< "BCNN = "<< tich / a <<endl;
    return 0;
}