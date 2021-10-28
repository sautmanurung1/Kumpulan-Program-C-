#include<iostream>
using namespace std;
int persegi_panjang(float panjang, float lebar)
{
	float N;
	N=panjang*lebar;
	cout<<"Hasil Luas persegi Panjang  : "<<N<<endl;
}
int segitiga (float alas, float tinggi)
{
	float N;
	N=0.5*alas*tinggi;
	cout<<"Hasil luas segitiga  :  "<<N<<endl;
}
main()
{
	int alas,tinggi,panjang,lebar;
	alas = 3 ;
	tinggi = 5;
	panjang = 8;
	lebar = 9 ;
	cout<<"Masukkan Alas : "<<alas<<endl;
	cout<<"Masukkan tinggi : "<<tinggi<<endl;
	cout<<"Masukkan Panjang : "<<panjang<<endl;
	cout<<"Masukkan Lebar : "<<lebar<<endl;
	persegi_panjang (panjang,lebar);
	segitiga (alas,tinggi);
}
