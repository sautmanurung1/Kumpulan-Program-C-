#include <iostream>
using namespace std;

void Hasil (int x, int y){
	if (x==1) {
		if (y>=17){
			cout << "Pria Dewasa";
		}
		else{
			cout << " Perjaka";
			
		}
	}
	else{
		if ( y>=17){
			cout<< " Wanita Dewasa";
		}
		else{
			cout << "Gadis";	
		}
	}
}

int main (){
	int umur, kel;
	
	cout <<"Jenis kelamin" <<'\n';
	cout <<"1. Laki-laki" << '\n';
	cout <<"2. Perempuan" << '\n';
	cout <<" Masukkan pilihan anda: "; cin>> kel;
	
	cout << " Masukkan Umur Anda : "; cin>> umur;
	
	Hasil( kel,umur) ;
}
		
