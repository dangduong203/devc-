#include <iostream>
using namespace std;
int ktrashh(int n){
    int tong = 0, dem=0;
    
       
    for (int i=1;i<n; i++){
         if (n % i == 0) tong+=i;
    }
    
    if (tong == n & n!=0) dem = 1;

    return dem;
}

int main(){
    int n;
 
    cout << (">> nhap mot so n: ");
    cin >>  n;
    int i = 1, check;
    cout<<"Cac so hoan hao la:";
    while ( i < n){
        check = ktrashh(i);
        if( check == 1 ) cout <<  i <<" ";
        ++i;
    }
    return 0;
}