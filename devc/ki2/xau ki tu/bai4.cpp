#include <iostream.h>
#include <string.h>
int main()
{	char s[50];
	int n,kt = 1;
	cout<<"Nhap vao mot xau ky tu:";
	cin.getline(s,50);
	n = strlen(s);
	for(int i=0;i<n;i++)
		if(s[i]!=s[n-i-1])
			kt=0;
	if(kt==1)
		cout<<"\nXau da nhap doi xung"<<endl;
	else
		cout<<"\nXau khong doi xung"<<endl;
}
