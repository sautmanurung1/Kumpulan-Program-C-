#include<iostream>
using namespace std;
int main()
{
	int usia;
	cout<<"berapa usia anda   ";
	cin>>usia;
	if(usia<=30){
		cout<<"Anda tidak diperkenankan menonton";
	}
	else if(usia<=17){
		cout<<"Anda terlalu Tua";
	}
	else if(usia<=50){
		cout<<"Anda tidak cocok lagi";
	}
	return 0;
}
