#include<iostream>
using namespace std;
int main ()
{

int nim_121_a;
char user[20];
 cout<<"Nama :  ";
 gets(user);
 cout<<"NIM  :  ";
 cin>>nim_121_a;

 cout<<"Tugas Matriks [3][3] \n";
 cout<<endl;


int pilihan_121_a ;
	cout << "menu pilihan \n";
	cout << "1.Penjumlahan 2 Matrik\n";
	cout << "2.Pengurangan 2 Matrik\n";
	cout << "2.Perkalian 2 Matrik\n";
	cin >>pilihan_121_a;

int matriks1_121_a[3][3];
int matriks2_121_a[3][3];
int pengurangan_121_a[3][3];
int pertambahan_121_a[3][3];
int perkalian_121_a[3][3];
int baris_121_a,kolom_121_a;

//Matriks Pertama
cout<<"-------------------\n";
cout<<"  Matriks Pertama  \n";
cout<<"-------------------\n";
for (baris_121_a=0;baris_121_a<3;baris_121_a++)
{
    for (kolom_121_a=0;kolom_121_a<3;kolom_121_a++)
    {
        cout<<"Masukan Angka ["<<baris_121_a<<"] ["<<kolom_121_a<<"] = ";
        cin>>matriks1_121_a[baris_121_a][kolom_121_a];
    }
        cout<<endl;
}
//Matriks Kedua
cout<<"------------------\n";
cout<<"  Matriks Kedua   \n";
cout<<"------------------\n";
for (baris_121_a=0;baris_121_a<3;baris_121_a++)
{
    for (kolom_121_a=0;kolom_121_a<3;kolom_121_a++)
    {
        cout<<"Masukan Angka ["<<baris_121_a<<"] ["<<kolom_121_a<<"] = ";
        cin>>matriks2_121_a[baris_121_a][kolom_121_a];
    }
        cout<<endl;
}
	switch (pilihan_121_a){

	case 1:
//Matriks Jumlah
cout<<"------------------------------\n";
cout<<"Hasil Pertambahan [3]+[3] \n";
cout<<"------------------------------\n";
for (baris_121_a=0;baris_121_a<3;baris_121_a++)
{
    for (kolom_121_a=0;kolom_121_a<3;kolom_121_a++)
    {
        pertambahan_121_a[3][3]=matriks1_121_a[baris_121_a][kolom_121_a]+matriks2_121_a[baris_121_a][kolom_121_a];
        cout<<pertambahan_121_a[3][3]<<" ";
    }
        cout<<endl;
}
	break;

	case 2:
//Matriks Kurang
cout<<"-----------------------------\n";
cout<<"Hasil Pengurangan [3]-[3] \n";
cout<<"-----------------------------\n";
for (baris_121_a=0;baris_121_a<3;baris_121_a++)
{
    for (kolom_121_a=0;kolom_121_a<3;kolom_121_a++)
    {
        pengurangan_121_a[3][3]=matriks1_121_a[baris_121_a][kolom_121_a]-matriks2_121_a[baris_121_a][kolom_121_a];
        cout<<pengurangan_121_a[3][3]<<" ";
    }
        cout<<endl;
}
	break;

	case 3:
//Matriks Perkalian
cout<<"------------------------------\n";
cout<<"Hasil Perkalian [3]x[3] \n";
cout<<"------------------------------\n";
for (baris_121_a=0;baris_121_a<3;baris_121_a++)
{
    for (kolom_121_a=0;kolom_121_a<3;kolom_121_a++)
    {
        perkalian_121_a[3][3]=matriks1_121_a[baris_121_a][kolom_121_a]*matriks2_121_a[baris_121_a][kolom_121_a];
        cout<<perkalian_121_a[3][3]<<" ";
    }
        cout<<endl;
}
	break;

}
}
