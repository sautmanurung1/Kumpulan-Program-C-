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
		 index = "A";     ;
	  }    else if(nilai >= 70){
         index = "B";
	  }    else {
         index = "C";
	  }
   }
   if(nilai <=60){
   	ket = "Maaf, anda belum lulus.";
   	
   	if(nilai <= 60){
		 index = "D";     ;
	  }    else if(nilai <= 50){
         index = "E";
	  }    
   }
   cout << "Status = " << ket << endl;
   cout << "Index Nilai = " << index << endl;

 return 0;
}
