#include<iostream>
using namespace std;
class phanso{
	private :
		int tu;
		int mau;
	public :
	    phanso(int tu =0 , int mau = 1 ){
		   this -> tu = tu;
		   this -> mau= mau;
	    }
       ~phanso(){}
       void nhap()
       {
       	cout <<"\nNhap tu so: ";
       	cin >> tu;
       	cout <<"\nNhap mau so: ";
       	cin >> mau;
	   }
       void xuat( )
	   {
       	cout<< "( " << tu <<"/"<<mau<<" )\n";
       }
       //tim uoc chung lon 
       int ucln(int tu , int mau ){
		    	while ( tu!= mau)
			{
				if(tu > mau )
				 tu =tu - mau ;
			    else 
			     mau = mau - tu ;
			}
			return tu  ;
		}
		//rut gon phan so
	   void psrg ()
	   	{
         	if(tu%mau==0)
			{
				cout<<"Phan so vua nhap la: "<<tu/mau<<endl;
			}
			else
			{
				cout<<"Phan so vua nhap la: "<<tu/ucln(tu,mau)<<"/"<<mau/ucln(tu,mau)<<endl;
			}
	   }
	   
    	friend phanso tong( phanso &ps, phanso &ps2 )
		   {
		   	phanso tong;
			 tong.tu = ( ps.tu * ps2.mau) + (ps2.tu * ps.mau);
			 tong.mau = ps.mau * ps2.mau;
	         return tong;
		   }
 	  	 phanso hieu( phanso ps )
		   {
	  		ps.tu = ( this->tu * ps.mau) - (ps.tu * this->mau);
			 ps.mau = this->mau * ps.mau;
	         return ps;
	 
		   }   
   };
int main()
{
	int n;
	phanso kq;
	cout <<"\nNhap so phan so: ";
	cin >> n;
	phanso *ps = new phanso[n];
	kq = ps[0];
	for(int i=0; i<n; i++)
	{
		cout <<"\nPhan so thu:  "<< i+1<<endl;
		ps[i].nhap();
	}
	cout <<"\nThong tin phan so: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout <<"\nPhan so thu:  "<< i+1<<endl;
		ps[i].xuat();
	}
	for(int i=1; i<n; i++)
	{
		cout <<"\nTong phan so " <<i+1 << ":"<<endl;
		//kq = kq. tong(ps[i]);
		ps[i].psrg();
		ps[i].xuat();
	}
	for(int i=1; i<n; i++)
	{
		cout <<"\nHieu phan so " <<i+1 << ":"<<endl;
		//kq = kq. hieu(ps[i]);
		ps[i].psrg();
		ps[i].xuat();
	}
	
}