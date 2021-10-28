#include <iostream>
#include <string.h>
using namespace std;

int main( ){
    char kode,kodeDiskon,namaBuku[30];
    long harga=0;

    cout<<"Kode Buku : ";cin>>kode;
    cout<<"Kode Diskon : ";cin>>kodeDiskon;
    if (kode == '1')    {
        strcpy(namaBuku,"Belajarcpp.com");
        if (kodeDiskon=='S' || kodeDiskon =='s'){
           harga=45000;
        } else {
           harga = 50000;
        }
    } else if (kode=='2') {
        strcpy(namaBuku,"Belajar C++");
        if (kodeDiskon=='S' || kodeDiskon=='s'){
           harga=65000;
        } else {
           harga = 70000;
        }
    } else {
        cout<<"Salah Kode Buku"<<endl;
    }
    cout<<"----------------------"<<endl;
    cout<<"Judul Buku : "<<namaBuku<<endl;
    cout<<"Harga Buku : "<<harga<<endl;
    return 0;
}
