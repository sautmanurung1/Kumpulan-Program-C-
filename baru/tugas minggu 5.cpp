#include<iostream>
using namespace std;
void luas_persegi_panjang(float panjang, float lebar)
{
	float N;
	N=panjang*lebar;
	cout<<"Hasil Luas persegi Panjang  : "<<N<<endl;
}
void segitiga (float alas, float tinggi)
{
	float N;
	N=0.5*alas*tinggi;
	cout<<"Hasil luas segitiga  :  "<<N<<endl;
}
main()
{
	int alas,tinggi,panjang,lebar;
	cout<<"Masukkan Alas : "<<endl;cin>>alas;
	cout<<"Masukkan tinggi : "<<endl;cin>>tinggi;
	cout<<"Masukkan Panjang : "<<endl;cin>>panjang;
	cout<<"Masukkan Lebar : "<<endl;cin>>lebar;
	luas_persegi_panjang (panjang,lebar);
	segitiga (alas,tinggi);
}
