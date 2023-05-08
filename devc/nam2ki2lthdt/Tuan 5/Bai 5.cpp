#include<iostream>
#include<string>
using namespace std;
class Person{
	protected:
	char Name[50];
	char Address[40];
	int phone;
   	public:
   	Person(){
   		strcpy(Name," ");
   		strcpy(Address," ");
   		phone=0;
	   	}
	Person(char*Name,char*Address,int phone){
		strcpy(this->Name,Name);
		strcpy(this->Address,Address);
		this->phone=phone;
	}
~Person(){}		
   void Nhap(){
   	fflush(stdin);
   	cout<<" Nhap name : ";
   	cin.getline(Name,50);
   	cout<<" Nhap address : ";
   	cin.getline(Address,40);
   	cout<<" Nhap phone : ";
   	cin>>phone;
   }  
   void Xuat(){
   	cout<<" Name : "<<Name<<endl;
   	cout<<" Address : "<<Address<<endl;
   	cout<<" Phone : "<<phone<<endl;
   }
   friend istream&operator>>(istream&is,Person ps){
   	ps.Nhap();
   	return is;
   }
   friend ostream&operator<<(ostream&os,Person ps){
   	ps.Xuat();
   	return os;
   }
};
class Officer:public Person	{
	protected:
	float Salary;
    public:
    Officer(){
    	Salary=0;
    }
    Officer(float Salary,char*Name,char*Address,int phone):Person(Name,Address,phone){
    	this->Salary=Salary;
    }
~Officer(){}
 void Nhap(){
 	Person::Nhap();
 	fflush(stdin);
 	cout<<" Nhap salary ";
 	cin>>Salary;
 } 
 void Xuat(){
 	Person::Xuat();
 	cout<<" Salary "<<Salary<<endl;
 }  
 friend istream&operator>>(istream&is,Officer&of){
 	of.Nhap();
 	return is;
 }
  friend ostream&operator<<(ostream&os,Officer of){
   	of.Xuat();
   	return os;
  }   
};
class Student{
	protected:
	float fee;
	public:
	Student(){
	fee=0;	
	}
	Student(float fee){
		this->fee=fee;
	}
~Student(){}	
   void nhap(){
   	fflush(stdin);
   	cout<<" Nhap fee : ";
   	cin>>fee;
   }
   void xuat(){
   	cout<<" Fee : "<<fee<<endl;
   }	
   friend istream&operator>>(istream&is,Student&st){
   	st.nhap();
   	return is;
   }
   friend ostream&operator<<(ostream&os,Student st){
   	st.xuat();
   	return os;
   }
};
 class Offstudent:public Officer,public Student{
 	public:
 	Offstudent(){
	 	
	 }
 	Offstudent(char*Name,char*Address,int phone,float Salary,float fee):Officer(Salary,Name,Address,phone),Student(fee){	
	 }
	 void Nhap(){
 		Officer::Nhap();
 		Student::nhap();
 	}
 	void Xuat(){
	 	Officer::Xuat();
	 	Student::xuat();
	 }
	 friend istream&operator>>(istream&is,Offstudent&ot){
 		ot.Nhap();
 		return is;
 	}
 	friend ostream&operator<<(ostream&os,Offstudent ot){
	 	ot.Xuat();
	 	return os;
	 }
	 float getfee(){
 		return fee;
 	}
 	char*getname(){
	 	return Name;
	 }
	 float getsalary(){
 		return Salary;
 	}
 };
  int main(){
  	int n;
  	cout<<" Nhap thong tin sinh vien : ";
  	cin>>n;
  	Offstudent a[60];
  	for(int i=0;i<n;i++){
	  	cout<<" Sinh vien thu : "<<i+1<<endl;
	  	cin>>a[i];
	  }
	  cout<<" Danh sach doi tuong da nhap "<<endl;
	  	for(int i=0;i<n;i++){
	  	cout<<" Sinh vien thu : "<<i+1<<endl;
	  	cout<<a[i];
	  }
    cout<<"\n Danh sach nhung nguoi co luong 1 jack : "<<endl;
    bool KT=false;
	for(int i=0;i<1;i++){
		if(a[i].getsalary()==5000000){
			cout<<a[i];
			KT=true;
		}
		if(!KT){
			cout<<" Khong co thong tin nguoi nay !!"<<endl;
		}
	}  
  
  for(int i=0;i<n-1;i++){
  	for(int j=i+1;j<n;j++){
	  	if(strcmp(a[i].getname(),a[j].getname())>0){
	  		Offstudent tg=a[i];
	  		a[i]=a[j];
	  		a[j]=tg;
	  	}
	  }
	  cout<<"\n Danh sach tang dan theo thu tu ho ten : "<<endl;
	  for(int i=0;i<n;i++){
  		cout<<a[i];
  	}
  }
  
  
  
  
  
  }