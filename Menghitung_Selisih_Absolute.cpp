#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int x,y,selisih;
	cout<<" Input Bilangan x : "; cin>>x;
	cout<<" Input Bilangan y : "; cin>>y;

if (x>y){
	selisih=x-y;
	
	cout<<"Selisih Nilai X dan Y adalah "<<selisih;
}

else if (y>x){
	selisih=y-x;

	cout<<"Selisih Nilai Y dan X adalah "<<selisih;
}
	return 0;
}

