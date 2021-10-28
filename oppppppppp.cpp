#include <iostream>
#include <string>
using namespace std;
int main()
{
   int nilai;
   string index, ket;
   cout << "Masukkan nilai = ";
   cin  >> nilai;
  
   if(nilai >= 60){
      ket = "Selamat anda lulus.";

	  if(nilai >= 80){
		 index = "A";
	  }    else if(nilai >= 70){
         index = "B";
	  }    else {
         index = "C";
	  }
   }
   if(nilai <= 50){
   	ket = "Maaf, anda belum lulus.";

   	if(nilai <= 40){
		 index = "D";
   }    else if(nilai <= 30){
         index = "E";
	  }		else {
	  	index = "F";
	  }
   }
   cout << "Status = " << ket << endl;
   cout << "Index Nilai = " << index << endl;

 return 0;
}
