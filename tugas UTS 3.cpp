#include <iostream>
using namespace std;
main()
{
	int pilihan,harga,banyak,total,diskon,bayar;
	cout<<"-------------------------------------------"<<endl;
	cout<<"|          CHICKHEN UNIVERSITY            |"<<endl;
	cout<<"-------------------------------------------"<<endl;
	cout<<"|1.Paket 1 ayam goreng + nasi + es teh    |"<<endl;
	cout<<"|2.Paket 2 ayam goreng + kentang + es teh |"<<endl;
	cout<<"|3.Paket 3 ayam goreng + nugget + es teh  |"<<endl;
	cout<<"------------------------------------------"<<endl;
	cout<<"------------------------------------------------------------------------"<<endl;
	cout<<"|                       Promo anak anak kost                           |"<<endl;
	cout<<"|Jika jumlah harga pembelian diatas 100000 maka mendapatkan diskon 20% |"<<endl;
	cout<<"|Jika jumlah harga pembelian dibawah 100000 maka mendapatkan diskon 10%|"<<endl;
	cout<<"------------------------------------------------------------------------"<<endl;
	
	cout<<"masukkan pilihan menu ";cin>>pilihan;
	if(bayar>100000){
		if(pilihan==1){
			cout<<"Paket 1"<<endl;
			harga=20000;
			cout<<"harga adalah "<<harga;
			cout<<" per porsi "<<endl;
			cout<<"masukkan banyak pesanan : ";cin>>banyak;
			total=banyak*harga;
			cout<<"total harga adalah : "<<total<<endl;
			diskon=total*0.2;
			cout<<"diskon yang didapat adalah : "<<diskon<<endl;
			bayar=total-diskon;
			cout<<"harga yang harus dibayar adalah "<<bayar<<endl;
		}
		else if(pilihan==2){
			cout<<"Paket 2"<<endl;
			harga=25000;
			cout<<"harga adalah "<<harga;
			cout<<" per porsi"<<endl;
			cout<<"masukkan banyak pesanan : ";cin>>banyak;
			total=banyak*harga;
			cout<<"total harga adalah : "<<total<<endl;
			diskon=total*0.2;
			cout<<"diskon yang didapat adalah : "<<diskon<<endl;
			bayar=total-diskon;
			cout<<"harga yang harus dibayar adalah "<<bayar<<endl;
		}
		else if(pilihan==3){
			cout<<"Paket 3"<<endl;
			harga=28000;
			cout<<"harga adalah "<<harga;
			cout<<"per porsi"<<endl;
			cout<<"masukkan banyak pesanan : ";cin>>banyak;
			total=banyak*harga;
			cout<<"total harga adalah : "<<total<<endl;
			diskon=total*0.2;
			cout<<"diskon yang didapat adalah : "<<diskon<<endl;
			bayar=total-diskon;
			cout<<"harga yang harus dibayar adalah "<<bayar<<endl;
		}
		else{
			cout<<"maaf pilihan anda tidak ada di menu"<<endl;
		}
	}
	
	if(bayar<=100000){
		if(pilihan==1){
			cout<<"Paket 1"<<endl;
			harga=20000;
			cout<<"harga adalah "<<harga;
			cout<<"  per porsi "<<endl;
			cout<<"masukkan banyak pesanan : ";cin>>banyak;
			total=banyak*harga;
			cout<<"total harga adalah : "<<total<<endl;
			diskon=total*0.1;
			cout<<"diskon yang didapat adalah : "<<diskon<<endl;
			bayar=total-diskon;
			cout<<"harga yang harus dibayar adalah "<<bayar<<endl;
		}
		else if(pilihan==2){
			cout<<"Paket 2"<<endl;
			harga=25000;
			cout<<"harga adalah "<<harga;
			cout<<" per porsi"<<endl;
			cout<<"masukkan banyak pesanan : ";cin>>banyak;
			total=banyak*harga;
			cout<<"total harga adalah : "<<total<<endl;
			diskon=total*0.1;
			cout<<"diskon yang didapat adalah : "<<diskon<<endl;
			bayar=total-diskon;
			cout<<"harga yang harus dibayar adalah "<<bayar<<endl;
		}
		else if(pilihan==3){
			cout<<"Paket 3"<<endl;
			harga=28000;
			cout<<"harga adalah "<<harga;
			cout<<" per porsi"<<endl;
			cout<<"masukkan banyak pesanan : ";cin>>banyak;
			total=banyak*harga;
			cout<<"total harga adalah : "<<total<<endl;
			diskon=total*0.1;
			cout<<"diskon yang didapat adalah : "<<diskon<<endl;
			bayar=total-diskon;
			cout<<"harga yang harus dibayar adalah "<<bayar<<endl;
		}
		else{
			cout<<"maaf pilihan anda tidak ada di menu"<<endl;
		}
	}
	return 0;
}
