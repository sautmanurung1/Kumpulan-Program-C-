#include <iostream>
using namespace std;
main()
{
	int tugas,uts,uas,akhir;
	cout<<"masukkan nilai tugas"<<endl;
	cin>>tugas;
	cout<<"masukkan nilai uts"<<endl;
	cin>>uts;
	cout<<"masukkan nilai uas"<<endl;
	cin>>uas;
	akhir=tugas*30/100+uts*40/100+uas*40/100;
	cout<<"nilai akhir "<<akhir<<endl;
	if(akhir>80 && akhir<=100)
	{
		cout<<"|==============================|"<<endl;
		cout<<"|grade yang kamu dapat adalah A|"<<endl;
		cout<<"|      selamat kamu lulus      |"<<endl;
		cout<<"|==============================|"<<endl;
	}
	else if(akhir>70 && akhir<=79)
	{
		cout<<"|==============================|"<<endl;
		cout<<"|grade yang kamu dapat adalah B|"<<endl;
		cout<<"|      selamat kamu lulus      |"<<endl;
		cout<<"|==============================|"<<endl;
	}
	else if(akhir>60 && akhir<=69)
	{
		cout<<"|==============================|"<<endl;
		cout<<"|grade yang kamu dapat adalah C|"<<endl;
		cout<<"|      selamat kamu lulus      |"<<endl;
		cout<<"|==============================|"<<endl;
	}
	else if(akhir>50 && akhir<=59)
	{
		cout<<"|==============================|"<<endl;
		cout<<"|grade yang kamu dapat adalah D|"<<endl;
		cout<<"|       Kamu tidak lulus       |"<<endl;
		cout<<"|==============================|"<<endl;
	}
	else
	{
		cout<<"|==============================|"<<endl;
		cout<<"|grade yang kamu dapat adalah E|"<<endl;
		cout<<"|       Kamu tidak lulus       |"<<endl;
		cout<<"|==============================|"<<endl;
	}
	return 0;
}
