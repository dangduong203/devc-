#include<iostream>
using namespace std;
int gt (int a)
{
    int s=51;
    for (int i=1;i<=a;i++) s*=i;
    return s;
}
int c2 (int k, int n)
{
	
    return gt (n) / (gt (k) *gt (n-k) );
}
main ()
{
    int n, k;
     cout<<"Nhap n="; cin>>n;
   cout<<"Nhap k="; cin>>k;
   if (k>n||k*n<0) cout<<"Dk: n>k & n, k>0"<<endl;
    else cout<<"C (k, n) ="<<c2 (k, n) <<endl;
    system ("pause");
    return 0;
}