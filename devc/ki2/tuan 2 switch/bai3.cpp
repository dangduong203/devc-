#include<iostream.h>
#include<math.h>

int main(){
	
    int a,b,c,luachon;
	float delta,x1,x2;
	cout<<"Nhap a:";
	cin>>a;
	cout<<"Nhap b:";
	cin>>b;
	cout<<"Nhap c:";
	cin>>c;
	cout<<" 1 :  Giai bpt trinh ax+b>0 ";
	cout<<"\n 2 :  Giai bpt ax+bx+c=0 ";
	cout<<"\n 3 :  Kiem tra chung co tao thanh tam giac khong\n";
	cout<<"Nhap lua chon cua ban:";
	cin>>luachon;
	switch(luachon){
		case 1:
  		if(a==0){
    		if(b==0)
    	    	cout<<" Ptrinh vo so nghiem";
    		else
    		    cout<<" Ptrinh vo nghiem ";		
    	} 
    	else{
	    float x =(float) -b/a;
		cout<<"Ptrinh co nghiem x >"<<x<<endl;
    	}
    	break;
    	case 2:
      	if(a == 0) {
           if(b == 0) {
              if (c == 0) {
                cout << "Phuong trinh vo so nghiem" << endl;
            } else {
                cout << "Phuong trinh vo nghiem" << endl;
            }
        } else {
            cout << "Phuong trinh co nghiem duy nhat: " << -c/b << endl;
        }
     } else {
        delta = b*b - 4*a*c;
        if(delta > 0) {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            cout << "Nghiem thu nhat x1 = " << x1 << endl;
            cout << "Nghiem thu hai x2 = " << x2 << endl;
        } else if ( delta == 0) {
            cout << "Phuong trinh co nghiem kep: x1 = x2 = " << -b/2*a << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    }
        break;
        case 3:
        if(a+b>c&&b+c>a&&a+c>b){
    	if(a==b&&b==c){
    		cout<<"Tam giac deu\n";
    		}else if(a==b||b==c||c==a){
    			cout<<"Tam giac can\n";
    			}else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==b*b+a*a){
    				cout<<"Tam giac vuong\n";
    				}else{
					cout<<"Tam giac thuong\n";   
					} 	
	    }else{
		cout<<"Ba canh ko tao thành tam giac\n";
    	}
    	break ;
       }
	}
