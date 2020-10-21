#include <iostream>
#include <math.h>
using namespace std;
int main()
{	float alas,tinggi,sisimiring,luas,keliling;
	
	cout<<"PROGRAM MENU MENGHITUNG SEGITIGA";
	cout<<"--------------------------------"<<endl;
	cout<<endl;
	cout<<"MASUKKAN TINGGI="; cin>>alas;
	cout<<"MASUKKAN ALAS="; cin>>tinggi;
	
	
	cout<<"MASUKKAN HASIL PERHITUNGAN"<< endl;
	cout<<"sisi miring segitiga ="<<sqrt(alas*alas*tinggi*tinggi)<<endl;
	cout<<"luas segitiga ="<<1.0/2.0*alas*tinggi<<endl;
	cout<<"keliling segitiga ="<< tinggi*alas*sqrt(alas*alas*tinggi*tinggi)<<endl;
	
	
	cout<<"TERIMA KASIH";
	cout<<"---------------"<<endl;
	cout<<"Program Berhenti";
	cout<<"-----------------"<<endl;

	return 0;
	
}
