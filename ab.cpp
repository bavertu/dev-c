#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout<<"2 adet sayi giriniz:"<<endl;
	cin>>a>>b;
	if(a>b) 
		cout<<"1. sayi ikinci sayidan buyuk";
	else if(b>a) 
		cout<<"2. sayi birinci sayidan buyuk";
	else
		cout<<"iki sayi esit";
}
