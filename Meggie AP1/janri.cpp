#include <iostream>
using namespace std;
main()
{
	cout<<"Program konversi suhu"<<endl;
	cout<<"====================="<<endl;
	cout<<"A. Konversi celcius ke reamur"<<endl;
	cout<<"B. Konversi celcius ke fahranheit"<<endl;
	cout<<"C. Konversi celcius ke kelvin"<<endl;
	cout<<"====================="<<endl;
	
	float cel;
	string urutan;
	cout<<"Masukkan nilai celcius";cin>>cel;
	cout<<"Masukkan pilihan ";cin>>urutan;	
	
	float a,b,c,A,B,C;
	if (urutan =="A")
	{
		cout<<"-------------- Reamur -------------"<<endl;
		a=cel*4/5;
		cout<<"Hasil konversi adalah "<<a<<endl;
	}
	else if (urutan =="B")
	{
		cout<<"--------------- Fahranheit -------------"<<endl;
		b=(cel*9/5)+32;
		cout<<"Hasil konversi adalah "<<b<<endl;
	}
	else if (urutan =="C")
	{
		cout<<"---------------- Kelvin -----------------"<<endl;
		c=cel+273;
		cout<<"Hasil konversi adalah "<<c<<endl;
	}
	return 0;
}
