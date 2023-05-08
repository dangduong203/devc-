#include <iostream>
#include <math.h>
using namespace std;
class PS{
	private:
		int ts,ms;
	public: 
	    PS(int ts=0,int ms=1){
	    	this->ts=ts;
	    	this->ms=ms;
		}
		~PS(){}
		friend istream & operator >> (istream &is,PS &a){
			cout<<"Nhap tu so: ";
			is>>a.ts;
			cout<<"Nhap mau so: ";
			is>>a.ms;
			return is;
		}
		friend ostream & operator << (ostream &os,PS &a){
		    cout<<a.ts<<"/"<<a.ms;
		    return os;
		}
	PS  psrg(){
		int a,b;
		PS d;
		d.ts = this->ts;
		d.ms = this->ms;
		a=abs(d.ts);
		b=abs(d.ms);
		while(a != b){
			if(a==0){
				b=0;
				d.ts = a;
				d.ms = b;
			return d;
			}else if (a>b){
			a = a - b;
			}
			else if(a<b){
				b=b-a;
			}
		}
        d.ts= ts / a;
		d.ms= ms / b;
		return d;
	}
	friend PS operator + (PS m,PS n){
            PS p;
            p.ts = m.ts*n.ms + m.ms*n.ts;
			p.ms = m.ms*n.ms;
            return p;
        }
    friend PS operator - (PS m,PS n){
            PS p;
            p.ts = m.ts*n.ms - m.ms*n.ts;
			p.ms = m.ms*n.ms;
            return p;
        }
    friend PS operator * (PS m,PS n){
            PS p;
            p.ts = m.ts*n.ts;
			p.ms = m.ms*n.ms;
            return p;
        }
    friend PS operator / (PS m,PS n){
            PS p;
            p.ts = m.ts*n.ms;
			p.ms = m.ms*n.ts;
            return p;
        }
};
int main(){
		PS a,b,c,t,h,nh,ch;
	cout<<"_Nhap phan so a : ";cout<<endl; cin>>a;
	
	cout<<"_Nhap phan so b : ";cout<<endl; cin>>b;
	
	PS rg1 = a.psrg();
	PS rg2 = b.psrg();
	cout<<"Phan so a vua nhap la a = "<<rg1<<endl;
	cout<<"\nPhan so b vua nhap la b = "<<rg2;
	cout<<endl;
	c = a+b;
	t = c.psrg();
	cout<<"\nTong 2 PS vua nhap = "<<t<<endl;
	c = a-b;
	h = c.psrg();
	cout<<"\nHieu 2 PS vua nhap = "<<h<<endl;
	c = a*b;
	nh = c.psrg();
	cout<<"\nTich 2 PS vua nhap = "<<nh<<endl;
	c = a/b;
	ch = c.psrg();
	cout<<"\nThuong 2 PS vua nhap = "<<ch<<endl;
	cout<<endl;
	return 0;
}
