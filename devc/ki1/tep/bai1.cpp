#include <iostream.h>
#include <fstream.h>
void doctep(char tentep[], int &a, int &b,int &c)
{
 fstream f(tentep,ios::in);
 if(!f)
{
     cout << "Khong the tao duoc tep tin "<<f<<endl;
     exit(1);
}
f>>a>>b>>c;
f.close();
}

int max(int a, int b, int c)
{
	int max=a;
	if(max<b){
		max=b;
	}
	if(max<c){
		max=c;
	}
	
	return max;
}



void ghitep(char tentep[], int &a, int & b,int &c)
{
   fstream f1(tentep,ios::out);
   if(!f1){ 
   cout<<"Khong the tao duoc tep tin"<<f1<<endl;
     exit(1);
}
   f1<<"\n"<<"max = "<<max(a,b,c); 
}


int main()
{ 
    char f[30];
    int a,b,c;
    cout<<"\n Nhap ten tep doc du lieu: "; cin.getline(f,30);
    doctep(f, a, b, c);
    cout<<"\n Nhap ten tep ghi du lieu: "; cin.getline(f,30);
    ghitep(f, a, b, c);
    return 0;
}
