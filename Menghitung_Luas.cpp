#include <iostream>
using namespace std;

int main(){ 
	char pilih,P ,S ;
	int al, p, l, t, L ;
	
	cout <<"P : Persegi Panjang"<<endl;
	cout <<"S : Segitiga"<<endl;
	cout << " =>>Luas Yang Akan Dihitung P atau S : "; cin>>pilih;
	
		if (pilih=='P'){
			system("cls");
			cout<<"  ||--Anda Memilih Menghitung Luas Persegi Panjang--||"<<endl;
			cout<<""<<endl;
			cout<<"Masukan Panjang Persegi Panjang = "; cin>>p;
			cout<<"Masukan Lebar Persegi Panjang = "; cin>>l;
			L=p*l;
			
			cout << " Jadi Luas Persegi Panjangnya Adalah   "<<L;
		}
		
		else if (pilih=='S'){
			system("cls");
			cout<<"  ||--Anda Memilih Menghitung Luas Segitiga--||"<<endl;
			cout<<""<<endl;
			cout<<"Masukan Alas Segitiga = "; cin>>al;
			cout<<"Masukan Tinggi Segitiga = "; cin>>t;
			L=0.5*al*t;
			
			cout << " Jadi Luas segitiganya Adalah   "<<L;
		}
}

