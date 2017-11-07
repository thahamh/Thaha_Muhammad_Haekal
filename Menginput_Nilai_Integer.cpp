#include<iostream>
using namespace std;

int main(){
	int x;
	cout<<"PROGRAM MENENTUKAN JENIS BILANGAN"<<endl;
	cout<<""<<endl;
	cout<<"Input Bilangan : ";cin>>x;
	cout<<""<<endl;
	if (x < 0)
	{
		cout<<"yang anda input adalah Bilangan Negatif"<<endl;
	}
	
	else if (x>0)
	{
		cout<<"yang anda input adalah Bilangan Positif"<<endl;
	}
	else if (x==0)
	
		cout<<"yang anda input adalah Bilangan Nol "<<endl;

	return 0;
}

